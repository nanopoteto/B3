#include <iostream>
#include "bubble_Header.h"

int main() {

	const int num = 100;
	int point[num]{};
	std::cout << "���R���̌�����͂��Ă�������" << std::endl;
	int num2 = 0;
	std::cin >> num2;
	std::cout << num2 << "�̎��R������͂��Ă�������" << std::endl;
	for (int i = 0; i < num2; i++) {
		std::cin >> point[i];
	}

	bubble(point, num2);

	std::cout << "�o�u���\�[�h�ł̕��ёւ��I��" << std::endl;
	for (int i = 0; i < num2; i++) {	
			std::cout << point[i] << std::endl;
	}

	system("pause");
	return 0;
}