#include "common.hpp"
using namespace std;

int* selectionSort(int arr[], int size) {
    int minVal;
    int minInd;
    int temp;
    for(int j = 0; j < size; j++) {
        minInd = j;
        for(int k = j; k < size; k++) {
            if(arr[k] < arr[minInd]) {
                minInd = k;
            }
        }
        temp = arr[j];
        arr[j] = arr[minInd];
        arr[minInd] = temp;
    }
    return arr;
}

int* bubbleSort( int arr[], int size) {
    int temp;
    for(int i = 0; i < size-1; i++) {
        for(int j = 0 ; j < size-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}


int main() {
    int a1[] = {-60, -12, -100, 54, 23, 10, 89, 45, 28, 53, 14, 64, 75, 89};
    int *p = bubbleSort(a1, 14);
    for(int i =0; i < 14; i++) {
        cout << *p << " ";
        p++;
    }
    return 0;
}