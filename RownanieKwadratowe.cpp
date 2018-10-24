#include <iostream>

int main() {

	double a, b, c, wyroznik;

	while (std::cin >> a >> b >> c)
	{
		wyroznik = b * b - 4 * (a*c);

		if (wyroznik > 0)
			std::cout << "2" << std::endl;
		else if (wyroznik < 0)
			std::cout << "0" << std::endl;
		else if (wyroznik == 0)
			std::cout << "1" << std::endl;
	}

	return 0;
}