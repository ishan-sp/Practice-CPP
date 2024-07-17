#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows);
};

string Solution::convert(string s, int numRows) {
    int c = numRows-2;
    int ctr = 0;
    for(int j =0; j <= numRows; j++) {
        if(ctr == numRows) {
            cout <<"Reached end";
            break;
        }
        for(int i = ctr; i < s.size(); i++) {
            if(((i-ctr)%(numRows+c) == 0) || ((i+ctr)%(numRows+c) == 0)) {
                if ((i-ctr) != 0) {
                    cout << string(c, ' ') << s[i]; }
                else {
                    cout << s[i];
                }
            }
        }
        cout << endl;
        ctr += 1;
 
    }
}

int main() {
    Solution s1;
    string s = "PAYPALISHIRING";
    s1.convert(s, 3);

    return 0;
}