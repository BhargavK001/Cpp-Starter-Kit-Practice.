//WAP a program to print two number without using namespace std.
// Hint - Using scope Resolution Operator.
#include<iostream>
main()
{
    int a=5,b=10;
    using std::cout;
    using std::endl;
    cout<<"First number is : "<<a<<endl;
    cout<<"Second number is : "<<b<<endl;
}