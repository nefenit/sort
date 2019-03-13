/* oddeven.c - implementation of odd-even sorting algorithm
 * (c) Copyright 2019 Bartosz Mierzynski
 * Written in C99 (if you remove bool then C89)
 */

#include <stddef.h>
#include <stdbool.h>

void swap(int *a, int *b) {
	int t;
	
	 t = *b;
	*b = *a;
	*a =  t;
}

void oddevensort(int arr[], size_t n) {
	int i;
	bool is_sorted = false;
	
	while(!is_sorted) {
		is_sorted = true;
		
		for(i = 1; i < n - 1; i += 2)
			if(arr[i] > arr[i + 1]) {
				swap(&arr[i], &arr[i + 1]);
				is_sorted = false;
			}
		
		for(i = 0; i < n - 1; i += 2)
			if(arr[i] > arr[i+1]) {
				swap(&arr[i], &arr[i + 1]);
				is_sorted = false;
			}
	}
}
