#include <stdio.h>
#include "isort.h"
void shift_element(int* arr, int i){
    int* p;
    for(p=arr+i;p>arr;p--){
        *p=*(p-1);
    }

}
void insertion_sort(int* arr , int len){
    for(int i=0;i<len-1;i++){
        int next=*(arr+i+1);
        int back=i;
        int  counter=0;

        while(back>=0&& next<*(arr+back)){
            counter++;
            back--;

        }
        if (counter>0){
            shift_element((arr+i-counter+1),counter);
            *(arr+i-counter+1)=next;
        }

    }

}
