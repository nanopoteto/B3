#include <iostream>
#include "bobble.h"
#include "step.h"

int main() {

	//バブルソートの関数
	int N[100] = { 0 }, i = 0, j = 0, num = 0, sum = 0;

	std::cout << "N個の自然数を大きい順にソートします。\nN＝" << std::endl;
	std::cin >> num;

	std::cout << "自然数を入力してください。" << std::endl;
	for (i = 0; i < num; i++) {
	std::cin >> N[i];
	}

	bobble(N, num);

	std::cout << "バブルソートの結果は" << std::endl;
	for (i = 0; i < num; i++) {
	std::cout << N[i] << std::endl;
	}

	std::cout << "バブルソートのstep数は，" << step(num) << "です。" << std::endl;

	system("pause");
	return 0;
}