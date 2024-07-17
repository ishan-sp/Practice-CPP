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
    unordered_map<int, int> m1;
    m1 = primeFactors(160);
    for(const auto& pair: m1) {
        cout << "Number : " << pair.first << " Power : " << pair.second << endl;
    }
    return 0;
}