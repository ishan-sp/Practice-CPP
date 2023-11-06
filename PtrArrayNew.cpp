#include<iostream>
using namespace std;

void print(int *ar){
    while(*ar != 0){
        cout << *ar;
        ar ++;
    }
}

int* print(void){
    int*p = (int*) malloc(10*sizeof(int));
    for(int i = 0; i < 10; i++){
        p[i] = i+1;
    }
    return p;
}
void printarray(int** s){
    for(int y = 0; y <10; y++){
        cout << *s[y] <<endl;
    }
}

int main() {
    int* ptrarr[12];
    int * heapptr;
    heapptr = print();
    for(int j = 0; j < 10; j++){
        ptrarr[j] = heapptr;
        heapptr++;
    }
    printarray(ptrarr);
    free(heapptr);
    return 0;
}