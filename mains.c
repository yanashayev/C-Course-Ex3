#include <stdio.h>
#include "isort.h"


//void insertion_sort(int* arr , int len);

int main() {
        int arr[SIZE_ARRAY];
        int* parr=arr;
        printf("please enter 50 numbers ");
        for (int i = 0; i < SIZE_ARRAY; i++) {
            scanf("%d",parr+i);
        }
        printf(" the array before sort \n");
        for (int i=0;i<SIZE_ARRAY; i++){
            printf("arr[%d]=%d\n",i,*(parr+i));
        }
        insertion_sort(parr , SIZE_ARRAY);
        printf(" the array after sort \n");
        for (int i=0;i<SIZE_ARRAY; i++){
            if (i==0){
                printf("%d",*(parr+i));
            }
            else{
            printf(",%d",*(parr+i));
            }
        }
    }
