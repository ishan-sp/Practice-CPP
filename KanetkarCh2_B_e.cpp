#include<iostream>
using namespace std;

const int i = 10;

int main() {
    const int i = 20;
    cout <<i<<endl<<::i<<endl;
    cout<<&i<<endl<<&::i<<endl;

// constant int definition doesnt get violated as the local scope has its own constant int and calling "i" does not refer tot he global var

    return 0;
}