#include <iostream>

int main() {

	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		int a, b;
		std::cin >> a >> b;

		while (a != b)
		{
			if (a > b)
				a -= b;
			else
				b -= a;
		}
		std::cout << a + b << std::endl;
	}
	return 0;
}