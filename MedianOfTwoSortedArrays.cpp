#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
};

double Solution::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> temp;
    int il = 0; 
    int ir = nums1.size() - 1;
    int jl = 0;
    int jr = nums2.size() - 1;
    int t = 0;
    cout <<"Alive" << endl;
    while(il<=ir && jl <= jr) {
        cout <<"Looping" << endl ;
        if(nums1[il] <= nums2[jl]) {
            cout << "Yes " << "v1[" << il <<"]" << nums1[il] << " is lesser than v2["<< jl << "]" << endl;
            temp.push_back(nums1[il]);
            il++;
            cout << il << endl; 
            t++;
        }
        else {
            cout << "No " << "v1[" << il <<"]" << nums1[il] << " is not lesser than v2["<< jl << "]" << endl;
            temp.push_back(nums2[jl]);
            jl++;
            t++;
        }
    }
    while(il <= ir) {
        cout << "Filling the empty elements since v1 was bigger " << endl;
        temp.push_back(nums1[il]);
        il++;
    }
    while(jl <= jr) {
        cout << "Filling the empty elements since v2 was bigger " << endl;
        temp.push_back(nums2[jl]);
        jl++;
    }
    for(int j = 0; j < temp.size(); j++) {
        cout << temp[j];
    }
    if(temp.size()%2 == 0) {
        cout << "The number of elements in temp is even " << endl;
        double mid = (temp.size()-1)/2;
        double median = 0.5*(temp[mid] + temp[mid+1]);
        return median;
    }
    else {
        cout << "The number of elements in temp is odd " << endl;
        return temp[(temp.size()-1)/2];
    }

}

int main() {
    Solution s1;
    vector<int> v1 = {0,0};
    vector<int> v2 = {0,0};
    cout << s1.findMedianSortedArrays(v1, v2);
    return 0;
}