//вариант 7

#include <iostream>
#include <cmath>
int main() {
	setlocale(LC_ALL, "RU");
	float nums[6]; //создаем массив для первых шести слагаемых
	float summ = 0; // сумма для первых шести слагаемых

	int n = 2;
	int i = 0;
	while (n < 8) {
		nums[i] = 1 / log2(n); //добавляем значения в массив
		++n;
		++i;
	}
	
	for (int j = 0; j < 6; ++j ) {  //выводим первые шести значений
		std::cout << nums[j] << std::endl;
	}

	for (int y = 0; y < 6; ++y) { // находиим сумму 
		summ += nums[y];
	}
	std::cout << "Сумма шести слагаемых:" << summ << std::endl;


	return 0;
}







