#include <iostream>
#include "bubble_Header.h"

void swap(int&x, int&y) {
	int temp = x;
	x = y;
	y = temp;
}

void bubble(int t[], const int num) {

	int step = 0;
	for (int i = 0; i < num - 1; i++) {
		for (int j = 0; j < num - 1 - i; j++) {
			if (t[j] < t[j + 1]) {
				swap(t[j], t[j + 1]);
				step++;
			}
		}
	  }
	std::cout << "step”‚Í" << step << std::endl;
}