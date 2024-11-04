#include<iostream>
#define max 10
using namespace std;
class stack{
	public:
		int arr[max];
		int top;
		stack(){
			top=-1;
		}
		int isEmpty(){
			return (top==-1);
		}
		void push(int data)
		{
			arr[++top]=data;
		}
		int pop()
		{
			return arr[top--];
		}
};
int main()
{
	int u,v,n,ch,G[max][max],visited[max];
	stack s;
	
	cout<<"\nEnter number of nodes : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		visited[i]=0;
		for(int j=0;j<n;j++)
		{
			G[i][j]=0;
		}
	}
	do
	{
		cout<<"\nEnter edge is pair (u,v) : ";
		cin>>u>>v;
		G[u][v]=G[v][u]=1;
		cout<<"\n\nDo u want to add more edges ? Enter 1 : ";
		cin>>ch;
	}while(ch==1);
	
	cout<<"\n------Matrix representation-------\n\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"\t"<<G[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"\nEnter the starting vertex : ";
	cin>>u;
	cout<<"\n---------------DFS---------------\n\n";
	s.push(u);
	while(!s.isEmpty())
	{
		v=s.pop();
		if(visited[v]==0)
		{
			visited[v]=1;
			cout<<" "<<v;
		}
		for(int j=n-1;j>0;j--)
		{
			if(G[v][j]==1 && visited[j]!=1)
			{
				s.push(j);
			}
		}
	}
}
