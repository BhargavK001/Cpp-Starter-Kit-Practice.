//WAP a program to Swap number using function and  reference Variable.
#include<iostream>
using namespace std;
void swap(int &,int &);
main()
{
    int a,b;
    cout<<"Enter the first Number : ";
    cin>>a;
    cout<<"Enter the second Number : ";
    cin>>b;
    cout<<"Before Swapping numbers are : "<<endl;
    cout<<"First Number is : "<<a<<endl;
    cout<<"Second Number is : "<<b<<endl;
    cout<<endl;
    cout<<"After Swapping Numbers are : "<<endl;
    swap(a,b);
    cout<<"First Number is : "<<a<<endl;
    cout<<"Second Number is : "<<b<<endl;
}
void swap(int &p , int &q)
{
    int temp = p;
    p = q;
    q = temp;
}