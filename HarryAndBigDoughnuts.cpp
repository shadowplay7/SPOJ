#include <iostream>

int main() {

	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		int catsAmount, harryStrength, doughnutWeigth;
		std::cin >> catsAmount >> harryStrength >> doughnutWeigth;

		if (catsAmount*doughnutWeigth > harryStrength)
			std::cout << "no" << std::endl;
		else
			std::cout << "yes" << std::endl;
	}
	return 0;
}