#include <iostream>
using namespace std;
#include <string>

// class
class Person
{
// access modifier , here is 3 access modifire:  1.public,  2.private, 3.protected
public:
    // propertise, data member , attribute
    int age;
    string name;
    
    // member function, methord 
    void changeInfo(int Nage, string Nname)
    {
        age = Nage;
        name = Nname;
        cout << age << endl;
        cout << name << endl;
    }
};

int main()
{
    // object
    Person p1; // Person is class  and  p1 is a  object of this class
    p1.age = 20;
    p1.name = "shahriar";
    cout << p1.age << endl;
    cout << p1.name << endl;

    p1.changeInfo(22, "sakif");
}