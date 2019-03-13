/* oddeven.c - implementation of odd-even sorting algorithm
 * (c) Copyright 2019 Bartosz Mierzynski
 * Written in ANSI C (C89)
 */

void swap(int *a, int *b) {
	int t;
	
	 t = *b;
	*b = *a;
	*a =  t;
}

void oddevensort(int arr[], unsigned n) {
	int i, is_sorted = 0;
	
	while(!is_sorted) {
		is_sorted = 1;
		
		for(i = 1; i < n - 1; i += 2)
			if(arr[i] > arr[i+1]) {
				swap(&arr[i], &arr[i+1]);
				is_sorted = 0;
			}
		
		for(i = 0; i < n - 1; i += 2)
			if(arr[i] > arr[i+1]) {
				swap(&arr[i], &arr[i+1]);
				is_sorted = 0;
			}
	}
}
