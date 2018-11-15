#include <iostream>
#include <string>

int main() {

	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		std::string input;
		std::cin >> input;
		
			for (int j = 0; j < input.length(); ++j) {
				if ((int)input[j] >= 65 && (int)input[j] <= 67)
					std::cout << "2";
				if ((int)input[j] >= 68 && (int)input[j] <= 70)
					std::cout << "3";
				if ((int)input[j] >= 71 && (int)input[j] <= 73)
					std::cout << "4";
				if ((int)input[j] >= 74 && (int)input[j] <= 76)
					std::cout << "5";
				if ((int)input[j] >= 77 && (int)input[j] <= 79)
					std::cout << "6";
				if ((int)input[j] >= 80 && (int)input[j] <= 83)
					std::cout << "7";
				if ((int)input[j] >= 84 && (int)input[j] <= 86)
					std::cout << "8";
				if ((int)input[j] >= 87 && (int)input[j] <= 90)
					std::cout << "9";
			}
		std::cout << std::endl;
	}
	return 0;
}