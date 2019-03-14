/* bubble.c - "bubbling" sort 
 * (c) Copyright Bartosz Mierzynski
 */

#include "sort.h"

/* bubbling is the property of bubblesort
 * which is that after one outer loop
 * biggest yet unsorted element is placed last in array
 *
 * Example: 4 elements
 * after outer loop iteration | array
 * 0 -> *noise* 1st highest
 * 1 -> *noise* 2nd highest 1st highest
 * 2 -> *noise* 3rd highest 2nd highest 1st highest
 * 3 -> 4rd highest 3rd highest 2nd highest 1st highest
 * SORTED
 */

/* always worst case of O(n^2) */
void bubblesort(int arr[], size_t n) {
	int i, j;
	
	for(i = 0; i < n; ++i)
	for(j = 0; j < n - 1; ++j)
	if(arr[j] > arr[j + 1])
	swap(&arr[j], &arr[j + 1]);
	/*for(i = 0; i < n; ++i)
	for(j = n - 1; j > 0; --j)
	if(a[j] < a[j - 1])
	swap(a[j], a[j - 1]);*/
}

/* last element of array is always sorted after each outer loop iteration
   this version capitalizes on this property */
void bubblesort2(int arr[], size_t n) {
	int i, j;
	
	for(i = 0; i < n; ++i)
	for(j = n - 1; j > i; --j)
	if(arr[j] < arr[j - 1])
	swap(arr[j], arr[j - 1]);
	/*for(i = 0; i < n; ++i)
	for(j = 0; j < n - 1 - i; ++j)
	if(arr[j] > arr[j + 1])
	swap(&arr[j], &arr[j + 1]);*/
}

/* recursive version of the improved iterative one */
void bubblesort2r(int arr[], size_t n) {
	int i;
	
	if (n == 1) 
		return; 

	for (i = 0; i < n - 1; i++)
		if (arr[i] > arr[i + 1]) 
			swap(&arr[i], &arr[i + 1]); 

	bubblesort2r(arr, n-1); 
} 
