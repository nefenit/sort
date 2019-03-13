#ifndef __SORT_H__
#define __SORT_H__

#include <stddef.h>
#include <stdbool.h>

/* Sorts */
void bogosort(int[], size_t);
void bubblesort(int[], size_t);
void bubblesort2(int[], size_t);
void cocktail(int[], size_t);
void oddevensort(int[], size_t);
void quicksort_recursive_lomuto(int[], int, int);
void quicksort_recursive_hoare(int[], int, int);
void selectionsort(int[], size_t);

/* Utilities */
int partition_lomuto(int[], int, int);
int partition_hoare(int[], int, int);
bool is_sorted(int[], size_t);
void shuffle(int[], size_t);
void swap(int*, int*);


#endif /* __SORT_H__ */
