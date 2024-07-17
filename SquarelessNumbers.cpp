#include <cmath>
#include <cstdio>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;

unordered_map<int, int> primeFactors(int n) 
{ 
    unordered_map<int, int> m1;
    m1[2] = 0;
    while (n % 2 == 0) 
    { 
        m1[2] += 1;
        n = n/2; 
    } 
    for (int i = 3; i <= sqrt(n); i = i + 2) 
    { 
        m1[i] = 0;
        while (n % i == 0) 
        { 
            m1[i] += 1;
            n = n/i; 
        } 
    }
    if (n > 2) //for prime > 2
        m1[n] = 1;
    
    return m1;
} 

int main() {
    vector<int> v1;
    unordered_map<int, int> m2;
    int temp;
    int n; //number of integers
    cin >> n;
    for(int i=0; i < n; i++) {
        cin >> temp;
        v1.push_back(temp);
    }
    for(const auto& elem: v1) {
        m2 = primeFactors(elem);
        cout << endl;
        for(const auto& pair: m2) {
            //cout << "N being considered : " << elem << endl;
            //cout << "Number : " << pair.first << " Power : " << pair.second << endl;
            if(pair.second >= 2) {
                cout << elem << " is " << " not squareless" << endl;
                break;
            }
        }

    }

    return 0;
}