#include <iostream>
#include <vector>

bool isLine(std::vector<int> a)
{
	if (((a[0] * a[3] * 1) + (a[1] * 1 * a[4]) + (1 * a[2] * a[5])) - ((1 * a[3] * a[4]) + (a[0] * 1 * a[5]) + (a[1] * a[2] * 1)) == 0)
		return true;
	else
		return false;
}

int main() {

	int testCases, temp;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		std::vector<int> wiersz;
		for (int a = 0; a < 6; ++a)
		{
			std::cin >> temp;
			wiersz.push_back(temp);
		}
		
		if (!isLine(wiersz))
			std::cout << "NIE" << std::endl;
		else
			std::cout << "TAK" << std::endl;
	}
	return 0;
}