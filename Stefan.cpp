#include <iostream>	

int main() {

	long long testCases, input, w=0, sum=0;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		std::cin >> input;
		if (w > 0)
			w += input;
		else
			w = input;
		if (w > sum)
			sum = w;
	}
	std::cout << sum;
	return 0;
}