#include <iostream>
using namespace std;
#include <string>

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Student : public Person
{
public:
    int roll;

    Student(string name, int age, int roll) : Person(name, age)
    {
        this->roll = roll;
    }

    getInfo()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "roll : " << roll << endl;
    }
};

int main()
{
    Student s1("Sadman", 22, 1323);
    s1.getInfo();
}