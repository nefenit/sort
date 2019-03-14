/* insertion.c - insertion sort implementation
 * (c) Copyright 2019 Bartosz Mierzynski
 */

#include "sort.h"

void insertionsort(int arr[], size_t n) {
	int t, i, j;
	
	for(i = 1; i < n; ++i) {
		t = arr[i];
		for(j = i - 1; j >= 0 && arr[j] > t; --j)
			arr[j + 1] = arr[j];
		arr[j + 1] = t;
	}
}
