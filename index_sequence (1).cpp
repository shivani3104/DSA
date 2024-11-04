/*Company maintains employee information as employee ID, name, designation and 
salary. Allow user to add, delete information of employee. Display information of 
particular employee. If employee does not exist an appropriate message is displayed. If 
it is, then the system displays the employee details. Use index sequential file to maintain 
the data.*/

#include <iostream>
#include <fstream>
#include <cstring>
#include<stdio.h>

using namespace std;

class Employee 
{
    private:
       int id;
       char name[20];
       float salary;
    public:
        void read();
        void display();
        int getempid()
        {
            return id;
        }
        int getempsal()
        {
            return salary;
        }
        void updatesal(float s)
        {
            salary=s;
        }
         
};

void Employee::read()
{
    cout<<"enter a employee id:"<<endl;
    cin>>id;
    cout<<"enter a name of employee:"<<endl;
    cin.ignore(1);
    cin.getline(name,20);
    cout<<"enter a salary of employee:"<<endl;
    cin>>salary;
}
void Employee::display()
{
    cout<<id<<" "<<name<<"\t "<<salary<<endl;
}
fstream file;
void deleteexistingfile()
{
    remove("emp.dat");
}
void appendfile()
{
    Employee x;
    x.read();
    file.open("emp.dat",ios::binary|ios::app);
    if(!file)
    {
        cout<<"error in creating file"<<endl;
        return;
    }
    file.write((char*)&x,sizeof(x));
     file.close();
     cout<<"record add successfully."<<endl;
}
void displayall()
{
    Employee x;
    file.open("emp.dat",ios::binary|ios::in);
    if(!file)
    {
        cout<<"error in opening file"<<endl;
        return;
    }
    while(file)
    {
        if(file.read((char*)&x,sizeof(x)))
        {
            if(x.getempsal()>=10000&&x.getempsal()<=20000)
            {
                x.display();
            }
        }
    }
    file.close();

}

void searchforrecord()
{
    Employee x;
    int c;
    int isfound=0;
    cout<<"enter a employee id:"<<endl;
    cin>>c;
    file.open("emp.dat",ios::binary|ios::in);
    if(!file)
    {
        cout<<"error in opening file"<<endl;
        return;
    }
    while(file)
    {
        if(file.read((char*)&x,sizeof(x)))
        {
            if(x.getempid()==c)
            {
                cout<<"record found"<<endl;
                x.display();
                isfound=1;
                break;
            }
        }
    }
    if(isfound==0)
    {
        cout<<"record is not found"<<endl;
    }
    file.close();
}
void increasesalary()
{
    Employee x;
    int c;
    int isfound=0;
    float sal;
     cout<<"enter a employee id:"<<endl;
    cin>>c;
    file.open("emp.dat",ios::binary|ios::in);
    if(!file)
    {
        cout<<"error in opening file"<<endl;
        return;
    }
    while(file)
    {
        if(file.read((char*)&x,sizeof(x)))
        {
            if(x.getempid()==c)
            {
                cout<<"salary hike?"<<endl;
                cin>>sal;
                x.updatesal(x.getempsal()+sal);
                isfound=1;
                break;
            }
        }
    }
    if(isfound==0)
    {
        cout<<"record is not found"<<endl;
    }
    file.close();
    cout<<"salary update successfully.."<<endl;
}

void insertrecord()
{
    Employee x;
    Employee newemp;

    newemp.read();
    fstream fin;
    file.open("emp.dat",ios::binary|ios::in);
    fin.open("temp.dat",ios::binary|ios::out);
    if(!file)
    {
        cout<<"error in opening emp.dat file"<<endl;
        return;
    }
    if(!fin)
    {
        cout<<"error in opening temp.dat file"<<endl;
        return;
    }
    while(file)
    {
        if(file.read((char*)&x,sizeof(x)))
        {
            if(x.getempid()>newemp.getempid())
            {
                fin.write((char*)&newemp,sizeof(newemp));
            }
            fin.write((char*)&x,sizeof(x));
        }
    }
    fin.close();
    file.close();
    rename("temp.dat","emp.dat");
    remove("temp.dat");
    cout<<"record insert successfully.."<<endl;
}

int main()
{
    char ch;
    deleteexistingfile();
    do
    {
       int n;
       cout<<"***MAIN MENU***"<<endl;
       cout<<"1.add an empolyee"<<endl;
       cout<<"2.display"<<endl;
       cout<<"3.search"<<endl;
       cout<<"4.increase a salary"<<endl;
       cout<<"5.insert record"<<endl;
       cout<<"make your choice:"<<endl;
       cin>>n;
       switch (n)
       {
       case 1:
            appendfile();
            break;
       case 2:
            displayall();
            break;
       case 3:
            searchforrecord();
            break;
       case 4:
            increasesalary();
            break;
       case 5:
            insertrecord();
            break;               
       default:
            cout<<"invalid choice"<<endl;
        
       }
       cout<<"do you want to continue? :"<<endl;
       cin>>ch;

    } while(ch=='Y'||ch=='y');
    
}
   