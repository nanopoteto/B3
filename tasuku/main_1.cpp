#include<iostream>
#include "quick.h"
//#include "step.h"

int main() {

	//�N�C�b�N�\�[�g�̊֐�
	int N[100] = { 0 }, i = 0, j = 0, num = 0, sum = 0;
	std::cout << "N�̎��R����傫�����Ƀ\�[�g���܂��B\nN��" << std::endl;
	std::cin >> num;
	std::cout << "���R������͂��Ă��������B" << std::endl;
	for (i = 0; i < num; i++) {
		std::cin >> N[i];
	}
	quick(N, 0, num -1);
	std::cout << "�N�C�b�N�\�[�g�̌��ʂ�" << std::endl;
	for (i = 0; i < num; i++) {
		std::cout << N[i] << std::endl;
	}
	std::cout << "�o�u���\�[�g��step���́C" << (double) num * log2(num) << "�ł��B" << std::endl;

	system("pause");
	return 0;
}