#include<iostream>
using namespace std;

int i = 20;

int main() {
    int i = 5;
    cout <<"Local i : "<<i<<endl<<"Global i : "<<::i<<endl;
    cout << "Local i address : " << &i << endl<<"Global i address : " <<&::i<<endl;
    {
        int i = 10;
        cout <<"Nested local scope 1 i: : "<<i<<endl<<"Global i : "<<::i<<endl;
        cout << "Nested local scope 1 i address : " << &i << endl<<"Global i address : " <<&::i<<endl;
    }
    // The curvy brackets block represents the nested scope which is enclosed by the local main() scope. THe global enviornment
    // encompasses both these scopes
    cout << i;
    return 0; 
}