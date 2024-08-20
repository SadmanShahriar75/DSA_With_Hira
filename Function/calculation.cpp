#include <iostream>
using namespace std;

//.................Perform addition, subtraction, multiplication and  division of two numbers, homework 4th class ........

//.........addition..........
int addition (int a, int b){
    int c;
    c = a + b;
    cout << c;
    return c;
}

//.......subtraction.........
int subtraction (int a, int b){
    int c;
    c = a - b;
    cout << c;
    return c;
}

//..........multiplication............
int multiplication (int a, int b){
    int c;
    c = a * b;
    cout << c;
    return c;
}

//.........division............
int division (int a, int b){
    int c;
    c = a / b;
    cout << c;
    return c;
}

int main(){
    addition(10,5);
    cout<< endl;
    subtraction(20,10);
    cout<< endl;
    multiplication(5,4);
    cout<< endl;
    division(20,10);
    cout<< endl;
}