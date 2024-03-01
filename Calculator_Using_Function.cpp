//WAP to Create Calculator with operation of Add,Sub,Multiply,Div using function also display choose option using switch case.
#include<iostream>
using namespace std;
void add();
void sub();
void mul();
void div();
main()
{
    int choose;
    do
    {
    cout<<"Select the option for operations : "<<endl;
    cout<<"Enter 1 for Addition       : "<<endl;
    cout<<"Enter 2 for Subtraction    : "<<endl;
    cout<<"Enter 3 for Multiplication : "<<endl;
    cout<<"Enter 4 for Division       : "<<endl;
    cout<<"Enter 5 for exit"<<endl;
    cin>>choose;
    switch(choose)
    {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            div();
            break;
        case 5:
        
        default:
             cout << "Invalid input! Please enter a number between 1 and 5." << endl;
    }    
    } while (choose!=5);
}
void add()
{
    int a1,a2;
    cout<<"Enter first Number : ";
    cin>>a1;
    cout<<"Enter Second Number : ";
    cin>>a2;
    cout<<endl;
    cout<<"Addition of "<<a1<<" + "<<a2<<" = "<<a1+a2<<"."<<endl;
    cout<<endl;
}

void sub()
{
    int a1,a2;
    cout<<"Enter first Number : ";
    cin>>a1;
    cout<<"Enter Second Number : ";
    cin>>a2;
    cout<<endl;
    cout<<"Subtraction of "<<a1<<" - "<<a2<<" = "<<a1-a2<<"."<<endl;
    cout<<endl;
}

void mul()
{
    int a1,a2;
    cout<<"Enter first Number : ";
    cin>>a1;
    cout<<"Enter Second Number : ";
    cin>>a2;
    cout<<endl;
    cout<<"Multiplication of "<<a1<<" x "<<a2<<" = "<<a1*a2<<"."<<endl;
    cout<<endl;
}

void div()
{
    int a1,a2;
    cout<<"Enter first Number : ";
    cin>>a1;
    cout<<"Enter Second Number : ";
    cin>>a2;
    cout<<endl;
    cout<<"Division of "<<a1<<" / "<<a2<<" = "<<a1/a2<<"."<<endl;
    cout<<endl;
}
