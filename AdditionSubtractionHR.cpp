#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void fn1(int *a, int *b) {
    int add1 = *a + *b;
    int sub1 = abs(*a - *b);
    cout << add1 << endl;
    cout << sub1 << endl;
}
int main() {
    int x, y;
    cin >> x >> y;
    fn1(&x, &y);  
    return 0;
}
