/* bozo.c - randomly swaps elements until they are in order
 * (c) Copyright 2019 Bartosz Mierzynski
 */

#include <stdlib.h>

#include "sort.h"

void bozosort(int arr[], size_t n) {
	int i, j;
	
	srand(time(NULL));

	while (!is_sorted(arr, n)) {
		i = rand() % n;
		j = rand() % n;
		swap(&arr[i], &arr[j]);
	}
}
