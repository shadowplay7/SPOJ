#include <iostream>

bool TriangleCheck(double a, double b, double c)
{
	if ((a + b > c) && (a + c > b) && (b + c > a))
		return true;
	else
		return false;
}

int main() {

	double a, b, c;
	while (std::cin >> a >> b >> c)
	{
		if (!TriangleCheck(a, b, c))
			std::cout << '0' << std::endl;
		else
			std::cout << '1' << std::endl;
	}
	return 0;
}