#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int temp, erase;
    int no_erased, start, end;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }  
    cin >> erase;
    v.erase(v.begin() + (erase-1));
    cin >> start >> end;
    int t = 0;
    for(int j = start-1; j < end-1; j++) {
        if (t == 0) {
            v.erase(v.begin() + j);
            t += 1;
        }
        else {
            v.erase(v.begin() + (j-t));
            t += 1;
        }

    }
    cout << v.size() << endl;
    for(int k = 0; k < v.size(); k++) {
        cout << v[k] << " ";
    }
    return 0;
}
