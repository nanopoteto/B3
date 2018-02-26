#include <iostream>
#include "select_Header.h"

int main() {

	const int num = 100;
	int point[num]{};
	std::cout << "自然数の個数を入力してください" << std::endl;
	int num2 = 0;
	std::cin >> num2;
	std::cout << num2 << "個の自然数を入力してください" << std::endl;
	for (int i = 0; i < num2; i++) {
		std::cin >> point[i];
	}

	selectsort(point, num2);

	std::cout << "選択ソートでの並び替え終了" << std::endl;
	for (int i = 0; i < num2; i++) {
		std::cout << point[i] << std::endl;
	}

	system("pause");
	return 0;
}