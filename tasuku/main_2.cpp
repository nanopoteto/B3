#include <iostream>
#include "shell.h"
//#include "step.h"

int main() {

	//�V�F���\�[�g�̊֐�
	int N[100] = { 0 }, i = 0, j = 0, num = 0, sum = 0;
	std::cout << "N�̎��R����傫�����Ƀ\�[�g���܂��B\nN��" << std::endl;
	std::cin >> num;
	std::cout << "���R������͂��Ă��������B" << std::endl;
	for (i = 0; i < num; i++) {
		std::cin >> N[i];
	}
	shell(N, num);
	std::cout << "�V�F���\�[�g�̌��ʂ�" << std::endl;
	for (i = 0; i < num; i++) {
		std::cout << N[i] << std::endl;
	}
	//std::cout << "�o�u���\�[�g��step���́C" << step(num) << "�ł��B" << std::endl;

	system("pause");
	return 0;
}