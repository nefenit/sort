/* quick.c - quicksort implementations
 * (c) Copyright 2019 Bartosz Mierzynski
 */

#include "sort.h"

/* Choosing pivot
 * - we want to avoid getting problems with partially order input and avoid 
 *   worst case of O(n^2)
 * Good:
 * - random element in array
 * - middle element in array
 * - median of first, middle and last element but preferably random ones (Mo3)
 * Bad:
 * - first element in array
 * - last element in array
 */


/* Lomuto's partitioning scheme
 * - easier to implement
 * - degrades to O(n^2) when input is sorted
 * - doesn't produce stable sort
 */

int partition_lomuto(int arr[], int low, int high) {
	int pivot = arr[low];
	int i = low, j = low;
	
	for(; j <= high; ++j)
        	if (arr[j] <= pivot)
			swap(&arr[i++], &arr[j]);
	return i - 1;
}

void quicksort_recursive_lomuto(int arr[], int low, int high) {
	int pi;
	
	if(low < high) {
		pi = partition_lomuto(arr, low, high);
		quicksort_recursive_lomuto(arr, low, pi - 1);
		quicksort_recursive_lomuto(arr, pi + 1, high);
	}
}

/* Hoare's partitioning scheme
 * - more efficent (3x fewer swaps on average)
 * - efficent partitions when values are equal
 * - degrades to O(n^2) when input is sorted
 * - doesn't produce stable sort
 */

int partition_hoare(int arr[], int low, int high) {
	int pivot = arr[low];
	int i = low, j = high;
	
	for(;;) {
		while(arr[j] > pivot)
			j--;
		while(arr[i] < pivot)
			i++;
		if(i < j)
			swap(&arr[i++], &arr[j--]);	
		else
			return j;
	}
}

void quicksort_recursive_hoare(int arr[], int low, int high) {
	int pi;
	
	if(low < high) {
		pi = partition_hoare(arr, low, high);
		quicksort_recursive_hoare(arr, low, pi);
		quicksort_recursive_hoare(arr, pi + 1, high);
	}
}
