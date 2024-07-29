#include <iostream>
using namespace std;

int main()
{
    int x = 6;
    int* ptr = &x ;
    cout << ptr << endl;  //  0x61ff08
    ptr = ptr + 1;  // ptr++

    //  4 byte increase,  in hexa decimal num
    // 0 1 2 3 4 5 6 7 8 9 a b c d f  

    cout << ptr << endl; // 0x61ff0c
}