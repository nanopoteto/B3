#include<iostream>
#include"swap.h"

void bobble(int t[], const int size) {
	int i, j;
	for (i = 0; i < size - 1; i++) {
		for (j = size - 1; j > i; j--) {
			if (t[j] > t[j - 1]) {
				swap(&t[j], &t[j - 1]);
			}
		}
	}
}