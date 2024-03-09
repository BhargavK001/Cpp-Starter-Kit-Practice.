#include<iostream>
using namespace std;

template<typename T>
void my_swap(T& x, T& y) // we cannot use just swap word in cpp language we should use my_swap instead of swap or another name can be given.
{
    T temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    char p, q;
    cout << "Enter two numbers to swap:" << endl;
    cin >> a >> b;
    cout << "Before Swap : " << a << endl;
    cout << "Before Swap : " << b << endl;
    my_swap<int>(a, b);
    cout << "After Swap : " << a << endl;
    cout << "After Swap : " << b << endl;
    cout << "Enter two characters to swap:" << endl;
    cin >> p >> q; 
    cout << "Before Swap : " << p << endl;
    cout << "Before Swap : " << q << endl;
    my_swap<char>(p, q);
    cout << "After Swap : " << p << endl;
    cout << "After Swap : " << q << endl;

    return 0;
}
