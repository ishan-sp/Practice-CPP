#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x);
};

bool Solution::isPalindrome(int x) {
    if(x < 0) {
        return false;
    }
    long long temp = x;
    long long reversed_num = 0;
    while(x > 0) {
        reversed_num = reversed_num*10 + x%10;
        x = x/10;
    }
    if(reversed_num == temp) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    Solution s1;
    cout << "The number is a palindrome ? : " << s1.isPalindrome(0) << endl;
    return 0;
}