#include <iostream>
using namespace std;

int main()
{
    // int x = 5;
    // int y = 5;
    // int* ptr1 = &x ;
    // int* ptr2 = &y;
    // cout << *ptr1 + *ptr2  << endl;

    int x, y;
    int *p1 = &x;
    int *p2 = &y;
    cout << "Enter 1st number : " ;
    cin >> *p1;
    cout << "Enter 2nd number : " ;
    cin >> *p2;
    cout << "Total sum : " << *p1 + *p2 << endl;
}