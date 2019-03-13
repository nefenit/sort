/* bogo.c - bogo sort implementation
 * (c) Copyright 2019 Bartosz Mierzynski
 * Written in C99 (if you remove bool then C89)
 */

#include <stdlib.h>

#include "sort.h"

bool is_sorted(int arr[], size_t n) {
	while(--n >= 1)
		if(arr[n] < arr[n - 1])
			return false;
	return true;
}

void shuffle(int arr[], size_t n) {
	int i, r;
	
	for(i = 0; i < n; i++) {
		r = rand() % n;
		swap(&arr[i], &arr[r]);
	}
}

void bogosort(int arr[], size_t n) {
	while(!is_sorted(arr, n))
		shuffle(arr, n);
}
