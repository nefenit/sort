/* insertion.c - insertion sort implementation
 * (c) Copyright 2019 Bartosz Mierzynski
 */

#include "sort.h"

void insertionsort(int arr[], size_t n) {
	int i, j;
	
	for(i = 1; i < n; ++i) {
	for(j = i; j > 0 && arr[j] < arr[j - 1]; --j)
	swap(&arr[j], &arr[j - 1]);
}
