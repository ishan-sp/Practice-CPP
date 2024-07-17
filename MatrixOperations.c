#include<stdio.h>
#define row 3
#define col 3
int main () {
    int arr[row][col];
    //reading elements
    for(int i = 0; i < row; i++) { 
        for(int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    //printing elements
    for(int i = 0; i < row; i++) { 
        printf("\n");
        for(int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
    }

}