#include <iostream>

int main() {

	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		long int segCount, legsCount = 0, legs = 0;
		std::cin >> segCount;

		for (int j = 0; j < segCount; ++j) {
			std::cin >> legsCount;
			legs += legsCount;
		}

		if (segCount == 1)
		std::cout << legs << std::endl;
		else
			std::cout << segCount + legs-1 << std::endl;
	}
	return 0;
}