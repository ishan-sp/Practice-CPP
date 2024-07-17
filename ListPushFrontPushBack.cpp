#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int> lst;

    //pushing front
    for(int j = 0; j <= 10; j++) {
        lst.push_back(j);
    }
    auto it = lst.begin();
    cout << "Printing elements after push_back operation " << endl;
    while(it != lst.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    //pushing back
    for(int i = -10; i <= -1; i++) {
        lst.push_front(i);
    }
    it = lst.begin();
    cout << "Printing elements after push_front operation " << endl;
    while(it != lst.end()) {
        cout << *it << " ";
        it++;
    }
    return 0;
}