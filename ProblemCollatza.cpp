#include <iostream>

int main() {

	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		int input, res=0;
		std::cin >> input;

		while (input != 1)
		{
			if (input % 2 == 0)
			{
				input /= 2;
				res++;
			}
			else
			{
				input = (3 * input) + 1;
				res++;
			}
		}
		std::cout << res << std::endl;
	}
	return 0;
}