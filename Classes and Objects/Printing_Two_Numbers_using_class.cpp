#include<iostream>
using namespace std;
class Numbers
{
    public:
    int a,b;
    void display ()
    {
        cout<<a<<"\t"<<b;
    }
};
main()
{
    Numbers obj;
    obj.a=10;
    obj.b=20;
    obj.display();
}