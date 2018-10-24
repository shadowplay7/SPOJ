#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>


int main() {

	double r, d;

	while (std::cin >> r >> d)
		std::cout << std::fixed << std::setprecision(2) << (double)(r*r - (d / 2)*(d / 2)) * M_PI << std::endl;
	return 0;
}