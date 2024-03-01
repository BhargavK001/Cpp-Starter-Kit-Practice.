#include<iostream>
using namespace std;
int add(int a , int b) // returns the addition int integral.
{
    return a+b;
}
float add(float a , float b) // returns the addition in floating point.
{
    return a+b;
}
main()
{
    int Integer = add(5,5); // integer function Called.
    float Float = add(2.5f,2.5f); // Float function called.
    cout<<"int add function Result : "<<Integer<<endl;
    cout<<"Float add function Result : "<<Float<<endl;
}