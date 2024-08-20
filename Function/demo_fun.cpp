#include<iostream>
using namespace std;


void firstFun(){
    cout << "Im first Fun :)" << endl;
}

void secondFun(){
    firstFun();
    cout << "Im second Fun :)" << endl;
}

int main(){
    secondFun();
    cout << "Im MAIN Fun *;* " << endl;
}