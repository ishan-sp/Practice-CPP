#include<stdio.h>

int main() {
    int arr[5];
    int minInd, temp;
    for(int x = 0; x < 5; x++) {
        printf("Enter the element %d ", x+1);
        scanf("%d", &arr[x]);
    }
    printf("\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int k  = 0; k < 5; k++) {
        printf("%d ", arr[k]);
    }
    return 0;
}