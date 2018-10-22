#include <iostream>

int avgSpeed(int num, int num2)
{
	return (2 * num*num2) / (num + num2);
}

int main()
{
	int testCases, input, input2;
	std::cin >> testCases;

	for (int i=0; i<testCases; ++i)
	{
		std::cin >> input >> input2;
		std::cout << avgSpeed(input, input2) << std::endl;
	}
return 0;
}