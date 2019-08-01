#include <iostream>
#include "select_Header.h"

void swap(int&x, int&y) {
	int temp = x;
	x = y;
	y = temp;
}

void selectsort(int a[], int n) {
	int step = 0;
	for (int i = 0; i < n - 1; i++) {
		int index = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] > a[index]) {
				index = j;
			}
		}
		if (index != i) {
			swap(a[index], a[i]);
			step++;
		}
	}
	std::cout << "“ü‚ê‘Ö‚¦‚ðs‚Á‚½‰ñ”‚Í" << step << std::endl;
}