#include "common.hpp"
using namespace std;

class vectorOp {
    private:
        vector<int> v1;
        vector<int> filtered_vec;
        vector<int> sorted_vec;
    public:
        void readV1() {
            int temp;
            int t;
            cout << "Enter number of terms ";
            cin >> temp;
            for(int i = 0; i < temp; i++)  {
                cin >> t;
                v1.push_back(t);
            }
        }
        void sortV1() {
            sorted_vec = v1;
            sort(sorted_vec.begin(), sorted_vec.end());
            cout << "Vector is now sorted" << endl;
        }
        void filterV1() {
            for(int elem: v1) {
                if(elem < 10) {
                    filtered_vec.push_back(elem);
                }
            }
        }
        void displayVector() {
            cout << "Orignal Vector" << endl;
            if(!v1.empty()) {
                for(int elem: v1) {
                    cout << elem << " ";
                }
                cout << endl;
            }
            else {
                cout << "V1 is empty" << endl;
            }
            cout << "Sorted Vector" << endl;
            if(!sorted_vec.empty()) {
                for(int elem: sorted_vec) {
                    cout << elem << " ";
                }
                cout << endl;
            }
            else {
                cout << "Sorted Vector is empty" << endl;
            }
            cout << "Filtered Vector" << endl;
            if(!filtered_vec.empty()) {
                for(int elem: filtered_vec) {
                    cout << elem << " ";
                }
                cout << endl;
            }
            else {
                cout << "Filtered Vector is empty" << endl;
            }
        }
};

int main() {
    vectorOp op1;
    op1.readV1();
    op1.sortV1();
    op1.filterV1();
    op1.displayVector();

    return 0;
}