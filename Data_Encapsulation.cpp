#include <iostream>

class Example {
private:
    int data;

public:
    Example(int a) : data(a) {}

    int getData()  
    {
        return data;
    }
};

main() {
    Example obj(42);
    std::cout << "Data: " << obj.getData() << std::endl;
}
