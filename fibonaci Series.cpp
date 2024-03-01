// Fibonacci series printing.
#include<iostream>
using namespace std;
main()
{
    int t1,t2,n;
    cout<<"Enter the term 1 : ";
    cin>>t1;
    cout<<"Enter the term 2 : ";
    cin>>t2;
    cout<<"Enter a number of terms : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"\t"<<t1;
        int result = t1+t2;
        t1=t2;
        t2 = result;
    }

}