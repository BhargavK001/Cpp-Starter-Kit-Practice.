#include<iostream>
using namespace std;
class circle
{
    float r,a;
    public:
    void input();
    void compute();
    void display();
};
inline void circle::input()
{
    cout<<"Enter the radius of the circle: ";
    cin>>r;
}
inline void circle::compute()
{
    a =3.14*r*r;
}
inline void circle::display()
{
    cout<<"The area of the circle is: "<<a<<endl;
}
main()
{
    circle c;
    c.input();
    c.compute();
    c.display();
}