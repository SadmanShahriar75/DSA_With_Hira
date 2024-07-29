#include <iostream>
using namespace std;
#include <string>

class Person
{
public:
    int age;
    string name;

    Person(int age, string name)
    {
        this->age = age;
        this->name = name;
    }

    Person(Person &originalObj){
        cout << "Im custom copy contructor" << endl;
        this->age = originalObj.age;
        this->name = originalObj.name;

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

    Person p2(p1); // custom copy constructor
    p2.getInfo();
}