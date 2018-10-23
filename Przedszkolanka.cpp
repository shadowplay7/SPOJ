#include <iostream>	

int NWD(int a, int b)
{
	int temp;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main() {

	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i) 
	{
		int a, b;
		std::cin >> a >> b;
		std::cout << a / NWD(a, b)*b << std::endl;
	}
	return 0;
}