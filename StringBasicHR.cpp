#include<iostream>
#include<string>
using namespace std;

string s1, s2;

int main() {
    cin >> s1 >> s2;
    cout << s1.length() << " " << s2.length() << endl;
    cout << s1 + s2 << endl;
    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
    cout << s1 << " " << s2;
    return 0;
}