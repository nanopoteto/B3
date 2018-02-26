#include <iostream>
#include "swap.h"

void quick(int t[], int left, int right) {
	int i, j, pivot;

	i = left;
	j = right;

	pivot = t[(left + right) / 2];

	while (1) {
		while (t[i] > pivot) 
			i++;
		while (pivot > t[j])
			j--;
		if (i >= j)
			break;
		swap(&t[i], &t[j]);
		i++;
		j--;
	}
	if (left < i - 1)
		quick(t, left, i - 1);
	if (j + 1 < right)
		quick(t, j + 1, right);
}