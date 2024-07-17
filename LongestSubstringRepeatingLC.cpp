#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

class Solution {
public:
    vector<char> v1;
    int lengthOfLongestSubstring(string s) {
        int maxl = 0;
        for (const char&c :s) {
            auto it = find(v1.begin(), v1.end(), c);
            if(it == v1.end()){
                v1.push_back(c);
            }
            else{
                if (v1.size() > maxl) {
                    maxl = v1.size();
                    v1.clear();
                    v1.push_back(c);
                }
            }   
        }
        if (v1.size() > maxl) {
            maxl = v1.size();
            v1.clear(); }
        return maxl;
    }
};

int main() {
    Solution s1;
    string s = "helloabcdef";
    cout << s1.lengthOfLongestSubstring(s);

    return 0;
}