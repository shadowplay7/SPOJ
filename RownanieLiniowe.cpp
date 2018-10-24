#include <iostream>
#include <iomanip>

int main() {

	double a, b, c;

	while (std::cin >> a >> b >> c)
	{
		if (a == 0 && b != c)
			std::cout << "BR" << std::endl;
		else if (a == 0 && b == c)
			std::cout << "NWR" << std::endl;
		else
			std::cout << std::fixed << std::setprecision(2) << (c - b) / a << std::endl;
	}
	return 0;
}