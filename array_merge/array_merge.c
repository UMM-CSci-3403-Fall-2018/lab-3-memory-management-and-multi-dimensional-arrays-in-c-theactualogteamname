#include <stdlib.h>
#include <stdio.h>
#include "array_merge.h"
#include "../mergesort/mergesort.c"

int* array_merge(int num_arrays,int* sizes, int** values){
	
	int fSize = 0;
	int index = 0;
	int* temp = (int*) calloc(fSize, sizeof(int));
	int* result;

	for (int i = 0; i < num_arrays; i++){
		fSize += sizes[i];
	}

	for (int n = 0; n < sizes[j]; n++){
		temp[index] = values[j][n];
		index++;
	}
}

	mergesort(fSize, temp);
	
	index = 1;
	int tSize = fSize;
	int cur = temp[0];
	int* store = (int*) calloc(fSize, sizeof(int));
	store[0] = temp[0];

	for (int i = 1; i < tSize; i++){
		if (temp[i] == cur){
			fSize--;
		}
		else {
			store[index] = temp[i];
			cur = temp[i];
			index++;
		}
	}
	
	free(temp);
	result = (int*) calloc(fSize + 1, sizeof(int));

	for (int i = 1; i < fSize + 1; i++){
		result[i] = store[i - 1];
	}
	
	free(store);
	result[0] = fSize;

	return result;

}

