#include <iostream>
#include "insert_Header.h"

void swap(int&x, int&y) {
	int temp = x;
	x = y;
	y = temp;
}

void insertsort(int a[], int n) {
	int step = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = i; j > 0; --j) {
			if (a[j] > a[j - 1]) {
				swap(a[j], a[j - 1]);
				step++;
			}
		}
	}
	std::cout << "“ü‚ê‘Ö‚¦‚ğs‚Á‚½‰ñ”‚Í" << step << std::endl;
}