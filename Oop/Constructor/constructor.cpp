#include <iostream>
using namespace std;
#include <string>

class Person
{
public:
    // non- parameterized constructor
    Person()
    {
        cout << "Hey, im constructor" << endl;
    }

    int age;
    string name;

    // parameterized constructor

    // Person(int a, string n)
    // {
    //     age = a;
    //     name = n;
    // }

    // parameterized constructor using this pointer
    Person(int age, string name)
    {
        this->age = age;
        this->name = name;
    }

    // getter
    void getInfo()
    {
        cout << "age : " << age << endl;
        cout << "name : " << name << endl;
    }
};

int main()
{
    Person p1(22, "sadman");
    p1.getInfo();
}