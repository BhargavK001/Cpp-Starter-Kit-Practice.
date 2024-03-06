/*Implement a C++ program that defines a class mystring to handle string operations.
The class should have methods to initialize a string, display it, and accept a new string.
Ensure that memory allocation and deallocation are handled properly.
1. Define a class mystring with private member char* str.
2. Implement a constructor to initialize the string with the provided input string.
3. Create a method display() to print the string.
4. Implement a method accept() to modify the string with a new input string.
5. Ensure proper memory management by deallocating memory in the destructor.
6. Write a main function to test the mystring class by creating an object, initializing it with a string "hello", displaying it, and then modifying it with a new string "new string".*/
#include<iostream>
#include<string.h>
using namespace std;
class mystring{
	char* str;
	public:
		mystring(char*s)
		{
			str = new char[sizeof(s)];
			strcpy(str,s);
		}
	void display()
	{
		cout<<str<<endl;
	}
	void accept(char *s)
	{
		strcpy(str,s);
	}
	~mystring()
	{
		cout<<"i am in destructor";
	}
};
main()
{
	char temp[]="hello";
	mystring s1(temp);
	s1.display();
	s1.accept("new string");
	s1.display();
}
