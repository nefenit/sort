/* bubble.c - bubble sort implementation
 * (c) Copyright Bartosz Mierzynski
 * Written in ANSI C (C89)
 */
 
#include <stddef.h>

void swap(int *a, int *b) {
	int t;
	
	 t = *b;
	*b = *a;
	*a =  t;
}

void bubblesort(int arr[], size_t n) {
	int i, j;
	
	for(i = 0; i < n; i++)
	for(j = 0; j < n - 1; j++)
	if(arr[j] > arr[j + 1])
	swap(&arr[j], &arr[j + 1]);
}
