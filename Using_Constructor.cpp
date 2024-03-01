//WAP to find area of circle using OOPS such that the class circle must have three members functions namely:
//Read(),Compute() {Calculation} & display()
#include<iostream>
using namespace  std;
class Circle
{
    float r,area;
    public:
    void read()
    {
        cout<<"Enter Radius of Circle : ";
        cin>>r;
    }
    void compute()
    {
        // area = pie * r^2
        area = 3.14*r*r;
    }
    void display()
    {
        cout<<"Area of Circle is : "<<area;
    }
};
main()
{
    Circle obj;
    obj.read();
    obj.compute();
    obj.display();
}