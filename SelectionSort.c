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
        //finding index of minimum element from j = i till end of array
        minInd = i;
        for(int j = i; j < 5; j++) {
            if(arr[j] < arr[minInd]) {
                minInd = j;
            }
        }
        //swapping elements
        temp = arr[i];
        arr[i] = arr[minInd];
        arr[minInd] = temp;
    }

    for(int k  = 0; k < 5; k++) {
        printf("%d ", arr[k]);
    }
    return 0;
}