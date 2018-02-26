#include <iostream>
#include "ins.h"

void shell(int t[], int n) {
	int gap;
	for (gap = n / 2; gap > 0; gap /= 2) {
		ins(t, gap, n);
	}
}