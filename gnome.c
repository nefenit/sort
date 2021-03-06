/* gnome.c - gnome sort implementation
 * (c) Copyright 2019 Bartosz Mierzynski
 */

#include "sort.h"

/* both of those are unoptimized versions */

void gnomesort(int arr[], size_t n) {
	int i = 0;
	
	while(i < n) {
		if(i == 0 || arr[i] >= arr[i - 1]) {
			++i;
		} else {
			swap(&arr[i], &arr[i - 1]);
			--i;
		}
	}
}

void gnomesort1(int arr[], size_t n) {
	int i = 1;
	
	while(i < n) {
		if(arr[i - 1] <= arr[i]) {
			++i;
		} else {
			swap(&arr[i], &arr[i - 1]);
			--i;
			if(i == 0)
				i = 1;
		}
	}
}
