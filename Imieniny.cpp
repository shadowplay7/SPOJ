#include <iostream>

int main() {

	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		int classAmount, candyAmount;

		std::cin >> classAmount >> candyAmount;

		if (classAmount - 1 > candyAmount) {
			std::cout << "TAK" << std::endl;
			continue;
		}

		if (classAmount - 1 ==0 && candyAmount > 0) {
			std::cout << "TAK" << std::endl;
			continue;
		}

		if (candyAmount == 0) {
			std::cout << "NIE" << std::endl;
			continue;
		}
		if (candyAmount % (classAmount - 1) > 0) {
			std::cout << "TAK" << std::endl;
			continue;
		}
		else
			std::cout << "NIE" << std::endl;
	}
	return 0;
}