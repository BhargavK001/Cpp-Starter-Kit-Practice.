/*Write a C++ program that manages basic and departmental information of employees. 
Implement classes to handle basic information
such as name, gender, and age, and departmental information such as department name and designation. 
Create a class Employee that inherits from both basic information and department information classes.
Prompt the user to input information for an employee and display the collected information.*/

#include<iostream>
#include<string.h>
using namespace std;
class basicinfo
{
	protected:
	string name,gen;
	public:
	int age;
	
	void getinfo()
	{
		cout<<"Enter your Name : ";
		cin>>name;
		cout<<"Enter your Gender : ";
		cin>>gen;
		cout<<"Enter your Age : ";
		cin>>age;
	}
};
class departmentinfo
{
	protected:
	string dname,des;
	public:
	void getdata()
	{
		cout<<"Enter your Department : ";
		cin>>dname;
		cout<<"Enter your Designation : ";
		cin>>des;
	}
};
class Employee: public basicinfo ,public departmentinfo 
	{ 
		public:
		void display()
		{
			cout<<"Name of Employee : "<<name<<endl;
			cout<<"Gender : "<<gen<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Department of "<<name<<" is : "<<dname<<endl;
			cout<<"Designation of "<<name<<" is : "<<des;	
		}
	};
main()
{
	Employee E1;
	E1.getinfo();
	E1.getdata();
	E1.display();
}
