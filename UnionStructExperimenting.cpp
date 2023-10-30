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
    
//here union allows me to freely assign values to both rice and gold without giving any error
//but you should be careful to avoid confusion later on in the code so thats why only one parameter ofa union should be alloted at one time
//here while printing the value of rice and gold, both are giving 25000 because of the order in which it was assigned
//rice was assigned first and then gold which overwrote the value assigned to rice

    return 0;
}