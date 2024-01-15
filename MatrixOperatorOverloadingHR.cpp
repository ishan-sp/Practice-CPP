#include<iostream>
#include<vector>
using namespace std;

class Matrix {
    public:
        vector<vector<int>> a;
    public:
        friend Matrix operator+(const Matrix& a, const Matrix& b); 
        void display_matrix() {
            for (const auto& row : a) {
                for(const auto& element : row) {
                    cout << element;
                }
            }
        }
};

Matrix operator+(const Matrix& x, const Matrix& b) {
    Matrix temp;
    for(int i = 0; i < x.a.size(); i++) {
        int s = x.a[0].size();
        vector<int> v2;
        for(int j = 0; j < s; j++) {
            int tem = x.a[i][j] + b.a[i][j];
            v2.push_back(tem);
        }
        temp.a.push_back(v2);
    }
    return temp;
}

int main() {
    Matrix m1;

    

    return 0;
}