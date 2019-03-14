/* miracle.c - checks if array is sorted until it is
 * (c) Copyright Bartosz Mierzynski
 */
 
 #include "sort.h" 
 
 void miraclesort(int arr[], size_t n) {
 	for(;;) {
		if(is_sorted(arr, n))
			break;
	}
 }
