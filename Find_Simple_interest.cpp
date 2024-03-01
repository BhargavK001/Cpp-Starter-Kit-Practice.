//WAP a Program to Calculate the Simple Interest taking principle(P),rate of interest(R) and Number of years(T) as inputs from user.
#include<iostream>
using namespace std;
main()
{
    float P,R,T,Simple_interest;
    cout<<"Enter the principle Amount : ";
    cin>>P;
    cout<<"Enter the Rate of Interest : ";
    cin>>R;
    cout<<"Enter the Duration in Years : ";
    cin>>T;
    //To find Simple interest formula is P*R*T/100.
    Simple_interest = P*R*T/100;
    cout<<"Simple Interest is : "<<Simple_interest;
}