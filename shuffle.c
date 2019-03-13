/* shuffle.c - shuffles elements of array randomly
 * (c) Copyright 2019 Bartosz Mierzynski
 */
 
 #include <stdlib.h>
 #include <time.h>
 
 #include "sort.h"
 
 void shuffle(int arr[], size_t n) {
	int i, j;
	
	srand(time(NULL));
	 
	for(i = 0; i < n; i++) {
		j = rand() % n;
		swap(&arr[i], &arr[j]);
	}
}
