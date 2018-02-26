#include <iostream>

int step(int a) {
	int sum = 0;
	for (int i = 1; i < a; i++) {
		sum = sum + (a - i);
	}
	return sum;
}