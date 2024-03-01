//WAP a Program to find Factorial of a number.
#include<iostream>
using namespace std;
main()
{
    int fact=1,num=0;
    cout<<"Enter a Number to find factorial : ";
    cin>>num;
    if(num<0)
    {
        cout<<"Wrong Number";
    }
    else if(num==1||num==0)
    {
        cout<<"Factorial of "<<num<<" is 1";
    }
    else
    {
        for(int i=1;i<=num;i++)
        {
            fact = fact*num;
        }
        cout<<"Factorial of "<<num<<" is : "<<fact;
    }
}