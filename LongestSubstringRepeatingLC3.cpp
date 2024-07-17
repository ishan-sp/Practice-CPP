    #include<iostream>
    #include<map>
    #include<algorithm>
    using namespace std;
    class Solution {
    public:
        map<int, int> m1;
        int maxl = 0;
        int start = 0;
        int lengthOfLongestSubstring(string s);
    };

    int Solution::lengthOfLongestSubstring(string s) {
        int l;
        if(start >= s.size()-2) {
            return maxl;
        }
        for(int j = start; j <= s.size(); j++) {
            auto it = m1.find(s[j]);
            if(it == m1.end()) {
                m1[s[j]] = j;
                cout << "MAP->first : " << s[j] << " MAP->second : " <<j << endl;
            }
            else {
                cout << "Reached recurring element : " << s[j] << endl;
                l = m1.size();
                cout << "Length of map at this time : " << l << "Max length at this time : " << maxl;
                if(l > maxl) {
                    maxl = l;
                    cout << "Reassigned maxl" << endl;
                }
                if(abs(j-(it->second) != 1)) {
                    start = it->second + 1;
                }
                else {
                    start = j;
                }
                m1.clear();
                cout << "Cleared map" << endl;
                cout << "Going for next recurrance..." << endl;
                maxl = lengthOfLongestSubstring(s);
            }
        }
        if(m1.size() > maxl) {
            maxl = m1.size();
        }
        return maxl;
    }


    int main() {
        Solution s1;
        string s = "aab";
        cout << s1.lengthOfLongestSubstring(s);
        return 0;
    }