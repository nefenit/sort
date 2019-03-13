/* miracle.c - implementation of miracle sort
 * (c) Copyright Bartosz Mierzynski
 */
 
 #include "sort.h" 
 
 void miraclesort(int arr[], size_t n) {
 	for(;;)
		if(is_sorted(arr, n))
			break;
 }