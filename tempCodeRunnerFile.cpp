#include<iostream>
#include<string>
using namespace std;


typedef struct employee {
        string name;
        int empno;
        int performance;
        int salary;
        int bonus;
    } ep;
union exchange {
    int cash;
    long int rice;
    int gold;
    int silver;
};
int main() {
    ep harry;
    harry.name = "Harry";
    harry.empno = 1234;
    harry.performance = 90;
    harry.salary = 1202033;
    cout <<harry.name<<endl;
    harry.name = "Coder";
    harry.empno += 789;
    cout <<harry.name<< endl;
    cout<<harry.empno<<endl;

    union exchange city1;
    city1.rice = 500000000;
    city1.gold = 250000;
    cout<<city1.rice<<endl;
    cout<<city1.gold<<endl;
    


    return 0;
}