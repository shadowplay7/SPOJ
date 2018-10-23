#include <iostream>

int main() {

	int testCases;
	std::cin >> testCases;

	int ends[10][4] =
	{
		{0,0,0,0},
		{1,1,1,1},
		{6,2,4,8},
		{1,3,9,7},
		{6,4,6,4},
		{5,5,5,5},
		{6,6,6,6},
		{1,7,9,3},
		{6,8,4,2},
		{1,9,1,9}
	};

	for (int i = 0; i < testCases; ++i)
	{
		int a, b;
		std::cin >> a >> b;
		std::cout << ends[a % 10][b % 4] << std::endl;
	}

	return 0;
}