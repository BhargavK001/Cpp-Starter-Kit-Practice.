//WAP a Program to Find avg Of a number and also display the sum of a number.
#include<iostream>
int Max = 5;
using namespace std;
main()
{
    int num[Max],Sum=0,avg=0;
    for(int i=0;i<Max;i++)
    {
        cout<<"Enter the numbers : ";
            cin>>num[i];
    }
    // For Sum of Numbers
    for(int i=0;i<Max;i++)
    {
        Sum = Sum + num[i];
    }
    cout<<"Sum is : "<<Sum<<endl;
    // For average of Number.
    avg = Sum/Max;
    cout<<"Average of Numbers is : "<<avg;
}