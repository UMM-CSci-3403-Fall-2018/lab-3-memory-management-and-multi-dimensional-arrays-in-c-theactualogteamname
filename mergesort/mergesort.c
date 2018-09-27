#include<stdio.h>
#include<stdlib.h>

void merge(int values[], int lo, int  mi, int hi){
    int *temp = new int[hi-lo+1];
    int i = lo, j = mi + 1;
    int k = 0;
    while(i <= mi && j <=hi){
        if(values[i] <= values[j])
            temp[k++] = values[i++];
        else
            temp[k++] = values[j++];
    }
    
    while(i <= mi)
        temp[k++] = values[i++];

    while(j <= hi)
        temp[k++] = values[j++];

    for(k = 0, i = lo; i <= hi; ++i, ++k)
        values[i] = temp[k];
 
    delete []temp;
}
void mergeSortHelper(int values[], int lo, int hi){
    int mid;
    if(lo < hi){
        mid = (lo + hi) >> 1;
        mergeSortHelper(values, lo, mid);
        mergeSortHelper(values, mid+1, hi);
        merge(values, lo, mid, hi);
    }
}
void mergesort(int size, int values[]){
    mergeSortHelper(values, 0, size-1);
}
