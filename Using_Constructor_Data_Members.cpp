//WAP a program to define class student having data members name and roll no.
//Accept and display data for one object.
#include<iostream>
#include<String.h>
using namespace std;
class Students
{
    string name;
    int roll;
    public:
    void getdate()
    {
        cout<<"Enter Name of Student : ";
        cin>>name;
        cout<<"Enter Roll No for "<<name<<" : ";
        cin>>roll;
    }
    void display()
    {
        cout<<"Name of Student : "<<name<<endl;
        cout<<"Roll no for "<<name<<" is "<<roll<<endl;
    }
};
main()
{
    int choose;
    Students obj,obj1,obj2;
    cout<<"For Student 1 : "<<endl;
    obj.getdate();
    cout<<"For Student 2 : "<<endl;
    obj1.getdate();
    cout<<"For Student 3 : "<<endl;
    obj2.getdate();
    cout<<endl;
    do
    {
    cout<<"Select a option to view data :"<<endl;
    cout<<"1 For Student 1 "<<endl;
    cout<<"2 For Student 2 : "<<endl;
    cout<<"3 For Student 3 : "<<endl;
    cout<<"4 For Exit";
    cin>>choose;
    if(choose==1)
    {
        obj.display();
    }
    else if(choose==2)
    {
        obj1.display();
    }
    else if(choose==3)
    {
        obj2.display();
    }
    else
    {
        cout<<"Invalid Input"<<endl;
    }
     } while (choose!=4);
}