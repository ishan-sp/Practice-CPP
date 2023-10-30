#include<iostream>
#include<string>
using namespace std;


int main() {
    int a = 10, b = 20;
    long int c;
    string p;
    p = to_string(a);
    c = a*static_cast<long int>(b);
    cout << c << endl;
    cout << p << endl;
    return 0;
}
//typecasting is done b/w similar datatypes and not string and integer
//converting b/w integer to string can be done with builting function in std namespace called std::to_string()