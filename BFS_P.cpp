#include<iostream>
#define max 10
using namespace std;
class queue{
	public:
		int f,r;
		int arr[max];
		queue()
		{
			f=r=-1;
		}
		void enqueue(int data)
		{
			if(f==-1)
				f++;
			r++;
			arr[r]=data;
		}
		int dequeue(){
			return (arr[f++]);
		}
		int isEmpty()
		{
			return(f==-1 || f>r);
		}
};
class node{
	public:
		int data;
		node *next;
		
		void insert(int u,int v,node*G[])
		{
			node *p=new node;
			p->data=v;
			p->next=NULL;
			if(G[u]==NULL)
			{
				G[u]=p;
			}
			else
			{
				node *q;
				for(q=G[u];q->next!=NULL;q=q->next);
				q->next=p;
			}
		}
};

void BFS(int n,node *G[])
{
	int v,u,visited[n];
	queue q;
	for(int i=0;i<n;i++)
	{
		visited[i]=0;
	}
	cout<<"\nEnter the starting vertex : ";
	cin>>u;
	cout<<"\n----------------BFS--------------\n\n";
	q.enqueue(u);
	cout<<"\t"<<u;
	while(!q.isEmpty())
	{
		v=q.dequeue();
		node *p;
		for(p=G[v];p!=NULL;p=p->next)
		{
			if(visited[p->data]==0)
			{
				q.enqueue(p->data);
				visited[p->data]=1;
				cout<<"\t"<<p->data;
			}
		}
	}
}

int main()
{
	int u,v,n,e;
	node n1,*G[max];
	cout<<"\nEnter number of nodes : ";
	cin>>n;
	cout<<"\nEnter number of edges : ";
	cin>>e;
	for(int i=0;i<n;i++)
	{
		G[i]=NULL;
	}
	for(int i=0;i<e;i++)
	{
		cout<<"\nEnter edge "<<i+1<<" in pair(u,v) : ";
		cin>>u>>v;
		n1.insert(u,v,G);
		n1.insert(v,u,G);
	}
	BFS(n,G);
	return 0;
}
