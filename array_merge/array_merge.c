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
		index++
	}
}

	mergesort(fSize, temp);
	




	return result;

}

