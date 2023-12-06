#include<iostream>
using namespace std;

struct NewType {
    int age;
    string first_name;
    string last_name;
    int standard;
};
struct NewType typedef nt;

int main() {
    nt n1;
    cin >> n1.age;
    cin >> n1.first_name;
    cin >> n1.last_name;
    cin >> n1.standard;

    cout << n1.age << " " << n1.first_name << " " << n1.last_name << " " << n1.standard;

    return 0;
}