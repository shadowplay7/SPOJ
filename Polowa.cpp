#include <iostream>
#include <string>

int main() {

	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		std::string input, split1;
		std::cin >> input;
		std::cout << input.substr(0, (input.length() / 2)) << std::endl;
	}
	return 0;
}