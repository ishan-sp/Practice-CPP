#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int grt(int w, int x, int y, int z) {
    int min1, min2, min3;
    min1 = max(w, x);
    min2 = max(y, z);
    min3 = max(min1, min2);
    return min3;
}
int main() {
    int a,b,c,d,e;
    cin >> a >> b >> c >> d;
    e = grt(a, b, c, d);
    cout << e;
    return 0;
}
