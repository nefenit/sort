/* shuffle.c - shuffles elements of array randomly
 * (c) Copyright 2019 Bartosz Mierzynski
 */
 
 #include <stdlib.h>
 
 #include "sort.h"
 
 void shuffle(int arr[], size_t n) {
	int i, r;
	
	for(i = 0; i < n; i++) {
		r = rand() % n;
		swap(&arr[i], &arr[r]);
	}
}
