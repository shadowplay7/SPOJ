#include <iostream>
#include <string>

int main() {

	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		std::string input;
		std::cin >> input;
		int count = 0;

		int j = 0, p = 1;
		std::cout << input[j];
		do
		{
			if (p <= input.size() && input[j] == input[p])
				p++;
			if (p <= input.size() && input[j] != input[p])
			{
				if (p - j == 2)
					std::cout << input[j];
				if (p - j > 2)
					std::cout << p - j;
				j = p;
				p++;
				if (p <= input.size())
					std::cout << input[j];
			}
		} while (p < input.size());
			std::cout << std::endl;
	}
	return 0;
}