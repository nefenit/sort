/* bogo.c - shuffles all elements until they are sorted
 * (c) Copyright 2019 Bartosz Mierzynski
 */

#include "sort.h"

void bogosort(int arr[], size_t n) {
	while(!is_sorted(arr, n))
		shuffle(arr, n);
}
