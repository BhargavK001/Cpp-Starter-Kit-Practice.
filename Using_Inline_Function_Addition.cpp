/*In C++, we can declare a function as inline. This copies the function to the location
of the function call in compile-time and may make the program execution faster.
• To create an inline function, we use the inline keyword.
• To inline a function, place the keyword inline before the function name and define
the function before any calls are made to the function.
• Inline functions are used to reduce the time overhead.
• When a function is inline, compiler replaces the function call with its code and
executes it there only. */

#include<iostream>
using namespace std;
inline int add(int a ,int b) //inlined function
{
    return a+b;
}
main()
{
    int a,b;
    cout<<"Enter the number of first elements :";
    cin>>a;
    cout<<"Enter the number of second element :";
    cin>>b;
    add(a,b); //inlined function called by compiler
    cout<<a+b;
}