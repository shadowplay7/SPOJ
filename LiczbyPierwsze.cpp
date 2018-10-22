#include <iostream>

bool is_prime(int num)
{
	if (num <= 1) {
		return false;
	}
	for (int i = 2; i < num; ++i)
		if (num%i == 0)
			return false;
	return true;
}

int main()
{
	int input, testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		std::cin >> input;
		if (is_prime(input) == true)
			std::cout << "TAK" << std::endl;
		else
			std::cout << "NIE" << std::endl;
	}
	return 0;
}