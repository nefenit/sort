/* bogo.c - bogo sort implementation
 * (c) Copyright 2019 Bartosz Mierzynski
 */

#include "sort.h"

void bogosort(int arr[], size_t n) {
	while(!is_sorted(arr, n))
		shuffle(arr, n);
}
