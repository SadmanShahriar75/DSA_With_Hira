#include <iostream>
using namespace std;
#include <string>

class Person
{

private:
    int birth_year;

public:
    int age;
    string name;
    // setter   , set the value
    void setInfo(int year)
    {
        birth_year = year;
    }
    // getter , get the value
    int getInfo()
    {
        return birth_year;
    }
};

int main()
{
    Person t1;
    t1.age = 22;
    t1.name = "SADMAN";
    cout << t1.age << endl;
    cout << t1.name << endl;
    // set the value
    t1.setInfo(2002);
    // get the value
    cout << t1.getInfo() << endl;
}