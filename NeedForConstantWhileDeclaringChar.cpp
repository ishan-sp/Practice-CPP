#include<iostream>
using namespace std;

int main() {
    const char *p = "Internet";
    //need to declare constant in c++ but works without it in c because c++ doesnt
    //allow u to modify the string literal which has a pointer pointing to its first character
    char q[] = "Internet";
    cout << p << q <<endl;   

    cout << p << q << endl;
    return 0;
}