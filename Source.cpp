//������� 7

#include <iostream>
#include <cmath>
int main() {
	setlocale(LC_ALL, "RU");
	float nums[6]; //������� ������ ��� ������ ����� ���������
	float summ = 0; // ����� ��� ������ ����� ���������

	int n = 2;
	int i = 0;
	while (n < 8) {
		nums[i] = 1 / log2(n); //��������� �������� � ������
		++n;
		++i;
	}
	
	for (int j = 0; j < 6; ++j ) {  //������� ������ ����� ��������
		std::cout << nums[j] << std::endl;
	}

	for (int y = 0; y < 6; ++y) { // �������� ����� 
		summ += nums[y];
	}
	std::cout << "����� ����� ���������:" << summ << std::endl;


	return 0;
}







