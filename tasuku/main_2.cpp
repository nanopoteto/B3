#include <iostream>
#include "shell.h"
//#include "step.h"

int main() {

	//シェルソートの関数
	int N[100] = { 0 }, i = 0, j = 0, num = 0, sum = 0;
	std::cout << "N個の自然数を大きい順にソートします。\nN＝" << std::endl;
	std::cin >> num;
	std::cout << "自然数を入力してください。" << std::endl;
	for (i = 0; i < num; i++) {
		std::cin >> N[i];
	}
	shell(N, num);
	std::cout << "シェルソートの結果は" << std::endl;
	for (i = 0; i < num; i++) {
		std::cout << N[i] << std::endl;
	}
	//std::cout << "バブルソートのstep数は，" << step(num) << "です。" << std::endl;

	system("pause");
	return 0;
}