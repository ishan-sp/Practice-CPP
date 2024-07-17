#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    bool found = false;
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int iter=0; iter< nums.size(); iter++) {
            int diff = target - nums[iter];
            auto it = find(nums.begin(), nums.end(), diff);
            int i = distance(nums.begin(), it);
            if(it != nums.end() && i != iter) {
                result.push_back(iter);
                result.push_back(i);
                return result;
            }
        }
        return result;
    }
};


int main() {
    vector<int> v1 = {3,3};
    int target = 6;
    Solution s1;
    for(const auto& elem : s1.twoSum(v1, target)) {
        cout << elem << endl;
    }
    return 0;
}