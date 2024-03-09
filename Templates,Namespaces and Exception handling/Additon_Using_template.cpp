#include<iostream>
using namespace std;
template<typename T>
void add (T a, T b) 
{
    T c=a+b;
    cout<<c<<endl;
}
//-------------------------------With return Type ---------------------------------
/*
T add (T a, T b)
{
    T c=a+b;
    return c;
}
*/
main()
{
    add<int>(1,1);
    cout<<endl;
    add<float>(1.0,1.0);
    cout<<endl;
    add<double>(2.222,2.222);
}