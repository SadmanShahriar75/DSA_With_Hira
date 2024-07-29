#include <iostream>

using namespace std;

int size = 4;
int queue[4];
int frontPointer = -1;
int backPointer = -1;

bool isEmpty(){
    return frontPointer == -1;
}

bool isfull(){
    return  backPointer + 1 == size;
}

int enqueue(int value){
    if (isfull()) {
        cout << "FULL" << endl;
        return -1;
    }
    if (isEmpty){
        frontPointer = frontPointer + 1;
    }

    backPointer = backPointer + 1;
    queue[backPointer] = value;
    return value;
}

int dequeue(){
    if (isEmpty()){
        cout << "dedqueue is empty";
        return -1;
    }
    int result = queue[frontPointer];
    if (frontPointer>= backPointer){
        frontPointer = backPointer = -1;
    }else{
        frontPointer++;
    }
    return result;

}


int main(){
    enqueue(12);
    enqueue(15);
    enqueue(26);
    enqueue(44);
    enqueue(55);
}
