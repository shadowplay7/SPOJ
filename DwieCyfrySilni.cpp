#include <iostream>	

int main()
{
	int testCases;;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		int userInput, wynik=1;
		std::cin >> userInput;

		if (userInput < 10)
		{
			for (int i = 1; i <= userInput; ++i)
			{
				wynik *= i;
			}
			std::cout << (wynik / 10) % 10 << " " << wynik % 10 << std::endl;
		}
		else
		{
			std::cout << "0 0" << std::endl;
		}
	}
	return 0;
}