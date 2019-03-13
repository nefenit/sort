/* bubble.c - bubble sort implementation
 * (c) Copyright Bartosz Mierzynski
 * Written in ANSI C (C89)
 */
 
#include <stddef.h>

#include "swap.h"

/* always worst case of O(n^2) */
void bubblesort(int arr[], size_t n) {
	int i, j;
	
	for(i = 0; i < n; i++)
	for(j = 0; j < n - 1; j++)
	if(arr[j] > arr[j + 1])
	swap(&arr[j], &arr[j + 1]);
	/*for(i = 0; i < n; i++)
	for(j = n - 1; j > 0; j--)
	if(a[j] < a[j - 1])
	swap(a[j], a[j - 1]);*/
}

/* last element of array is always sorted after each outer loop iteration
   this version capitalizes on this property */
void bubblesort2(int arr[], size_t n) {
	int i, j;
	
	for(i = 0; i < n; i++)
	for(j = n - 1; j > i; j--)
	if(a[j] < a[j - 1])
	swap(a[j], a[j - 1]);
	/*for(i = 0; i < n; i++)
	for(j = 0; j < n - 1 - i; j++)
	if(arr[j] > arr[j + 1])
	swap(&arr[j], &arr[j + 1]);*/
}
