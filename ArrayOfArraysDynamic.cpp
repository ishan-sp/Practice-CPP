#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int low_im_2 = 9;

int main() {
    int number_of_arrays, number_of_queries;
    int array, index;

    // Read the number of arrays
    cin >> number_of_arrays >> number_of_queries;
    int size_of_array;
    int entry;
    vector<vector<int>> v1;

    for (int j = 0; j < number_of_arrays; j++) {
        cin >> size_of_array;
        vector<int> temp;
        for(int i = 0; i < size_of_array; i++) {
            cin >> entry;
            temp.push_back(entry);
        }
        v1.push_back(temp);
    }
    vector<int> v2; 
    for (int q = 0; q < number_of_queries; q++) {
        cin >> array >> index;
        v2.push_back(v1[array][index]);
    }
    
    for (int i =0; i < v2.size(); i++) {
        cout << v2[i] << endl;
    }
    return 0;
}
