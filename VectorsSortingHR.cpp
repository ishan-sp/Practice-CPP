#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n;
int temp;
vector<int> v;
int main() {
    cin >> n;
    for(int i= 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for(int j = 0; j < n; j++) {
        cout << v[j] << " " ;
    }
    return 0;
}