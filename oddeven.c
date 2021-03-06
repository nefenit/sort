/* oddeven.c - implementation of odd-even sorting algorithm
 * (c) Copyright 2019 Bartosz Mierzynski
 */

#include "sort.h"

void oddevensort(int arr[], size_t n) {
	int i;
	bool swapped = true;
	
	while(swapped) {
		swapped = false;
		
		for(i = 1; i < n - 1; i += 2)
			if(arr[i] > arr[i + 1]) {
				swap(&arr[i], &arr[i + 1]);
				swapped = true;
			}
		
		for(i = 0; i < n - 1; i += 2)
			if(arr[i] > arr[i+1]) {
				swap(&arr[i], &arr[i + 1]);
				swapped = true;
			}
	}
}
