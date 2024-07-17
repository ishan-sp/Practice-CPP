#include<stdio.h>

int main() {
    int arr1[3][3] = {{1,2,1}, {4,2,3}, {6,2,1}};
    int arr2[3][3] = {{5,2,1}, {4,2,0}, {4,8,6}};
    int result[3][3];

    for(int i = 0 ; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for(int k = 0; k < 3; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for(int i = 0; i < 3; i++) { 
        for(int k = 0; k < 3; k++) {
            printf("%d ", result[i][k]);
        }
        printf("\n");
    }
    return 0;
}