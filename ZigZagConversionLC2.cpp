#include<iostream>
#include<string>
using namespace std;


class Solution {
public:
    string convert(string s, int numRows);
};

string Solution::convert(string s, int numRows) {
    string result;
    if (numRows == 1 || s.size() <= numRows) return s;
    int c = numRows-2;
    int ctr = 0;
    for(int j =0; j <= numRows; j++) {
        if(ctr == numRows) {
            break;
        }
        for(int i = ctr; i < s.size(); i++) {
            if(((i-ctr)%(numRows+c) == 0) || ((i+ctr)%(numRows+c) == 0)) {
                result += s[i];
            }
        }
        cout << endl;
        ctr += 1;
 
    }
    return result;
}

int main() {
    Solution s1;
    string s = "PAYPALISHIRING";
    cout << s1.convert(s, 3);
    //if (s1.convert(s, 4) == "PINALSIGYAHRPI") {
    //    cout << "True";
    //}

    return 0;
}
