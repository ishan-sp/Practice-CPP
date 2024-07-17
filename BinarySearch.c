#include<stdio.h>
#include<stdlib.h>

int binsearch(int low, int high, int arr[], int key) {
    int mid = low + (high+low)/2;
    if(arr[mid] == key) {
        return mid;
    }
    if(arr[mid] > key) {
        return binsearch(low, mid-1, arr, key);
    }
    if(arr[mid] < key) {
        return binsearch(mid+1, high, arr, key);
    }
}


int main() {
    int arr[] = {4,6,7,9,1,2,-5,-10,4};
    int key = 5;
    int res = binsearch(0, 7, arr, key);
    printf("%d", res);


}
