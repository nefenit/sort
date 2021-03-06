/* selection.c - selection sort implementation
 * (c) Copyright 2019 Bartosz Mierzynski
 */

#include "sort.h"

/* selection sort by finding smallest element*/
void selectionsort(int arr[], size_t n) {
	int i, j, k;
	
	for(i = 0; i < n; ++i) {
		k = i;
		for(j = i + 1; j < n; ++j)
			if(arr[j] < arr[k])
				k = j;
		swap(&arr[k], &arr[i]);
	}
}
