#include<iostream>
using namespace std;

int a = 5;
int b = 6;

void swapValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}


void swapPointer(int *x, int * y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swapReference(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
int main() {
    cout << "The value of a is :" << a << endl;
    cout << "The value of b is :" << b << endl;
    
    cout << "Swapping both numbers directly" << endl;
    swapValue(a, b);
    cout << "The value of a is :" << a << endl;
    cout << "The value of b is :" << b << endl;
// Note: Uncommenting this part of the code may make it look like the swap didnt happen while doing it with reference as 
// using pointer will swap it once and using reference would swap it once again to become the orignal combination of numbers

//    cout << "Swapping both numbers using pointer" << endl;
//    swapPointer(&a, &b);
//    cout << "The value of a is :" << a << endl;
//   cout << "The value of b is :" << b << endl;

    cout << "Swapping both numbers using reference" << endl;
    swapReference(a, b);
    cout << "The value of a is :" << a << endl;
    cout << "The value of b is :" << b << endl;
    return 0;
}