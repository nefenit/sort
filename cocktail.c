/* cocktail.c - cocktail sort implementation
 * (c) Copyright 2019 Bartosz Mierzynski
 * Written in C99 (if you remove bool C89)
 */

#include <stdef.h>
#include <stdbool.h>

void swap(int *a, int *b) {
	int t;
	
	 t = *b;
	*b = *a;
	*a =  t;
}

void cocktail(int arr[], size_t n) {
	int bottom = 0, top = n - 1;
	bool swapped = true;
	
	while(swapped) {
		swapped = false;
		for(int i = bottom; i < top; i++) {
			if(arr[i] > arr[i + 1]) {
				swap(&arr[i], &arr[i + 1]);
				swapped = true;
			}
		}
		top--;
		for(int i = top; i > bottom; i--) {
			if(arr[i] < arr[i - 1]) {
				swap(&arr[i], &arr[i - 1]);
				swapped = true;
			}
		}
		bottom++;
	}
}
