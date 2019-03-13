/* is_sorted.c - checks if array is sorted
 * (c) Copyright 2019 Bartosz Mierzynski
 */

#include "sort.h"

bool is_sorted(int arr[], size_t n) {
	while(--n >= 1)
		if(arr[n] < arr[n - 1])
			return false;
	return true;
}
