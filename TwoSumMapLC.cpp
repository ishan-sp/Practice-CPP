#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>


class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> m1;
        for(int iter=0; iter< nums.size(); iter++) {
            if(m1.find(target - nums[iter]) != m1.end()) {
                std::vector<int> result;
                result.push_back(m1[target - nums[iter]]);
                result.push_back(iter);
                return result;
            }
            else
                m1[nums[iter]] = iter;
        }
    }
};

int main() {
    std::vector<int> v1 = {3,3};
    int target = 6;
    Solution s1;
    for(const auto& elem : s1.twoSum(v1, target)) {
        std::cout << elem << std::endl;
    }
    return 0;
}