#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s, temp;
    cin >> s;
    int i1[s]; 
    for(int i = 0; i < s; i++) {
        cin >> temp;
        i1[i] = temp;
    }
    
    for(int j = s - 1; j >= 0; j--) {
        cout << i1[j];
    }
    return 0;
}
