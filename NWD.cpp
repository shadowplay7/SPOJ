#include <iostream>

int nwd(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}

int main()
{
	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; i++)
	{
		int num1, num2;
		std::cin >> num1 >> num2;
		std::cout << nwd(num1, num2) << std::endl;
	}
	return 0;
}