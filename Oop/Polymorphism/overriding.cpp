

#include <iostream>
using namespace std;
#include <string>

class Parent
{
public:
    void getInfo()
    {
        cout << "Im parent class";
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "Im child class";
    }
};

int main()
{
    Child c1;
    c1.getInfo(); // here we see function overriding
}