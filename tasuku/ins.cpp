#include <iostream>

void ins(int t[], int gap, int n) {
	int i, j, temp;
	for (i = gap; i < n; i++) {
		for (j = i - gap; j >= 0; j -= gap) {
			if (t[j] >= t[j + gap])
				break;
			else {
				temp = t[j];
				t[j] = t[j + gap];
				t[j + gap] = temp;
			}
		}
	}

}