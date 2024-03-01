//WAP a program to swap two numbers take input from user.
// Using temp Variable.
#include<iostream>
using namespace std;
main()
{
    int num1,num2;
    cout<<"\t"<<"Without using Temp Variable"<<endl;
    cout<<"Enter First Number : ";
    cin>>num1;
    cout<<"Enter Second Number : ";
    cin>>num2;
    cout<<"Number Before Swapping"<<endl;
    cout<<"First Number is : "<<num1<<endl;
    cout<<"Second Number is : "<<num2<<endl;
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
    cout<<"Number after Swapping"<<endl;
    cout<<"First Number is : "<<num1<<endl;
    cout<<"Second Number is : "<<num2<<endl;
    cout<<"\t"<<"Using Temp variable"<<endl;
    int temp = num1;
        num1 = num2;
        num2 = temp;
    cout<<"Number after Swapping"<<endl;
    cout<<"First Number is : "<<num1<<endl;
    cout<<"Second Number is : "<<num2<<endl;  
}