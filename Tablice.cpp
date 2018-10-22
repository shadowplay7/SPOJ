#include <iostream>
#include <vector>

int main() {

	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		int size=0, temp=0;
		std::cin >> size;
		std::vector<int> tab;

		for (int j = 0; j < size; ++j)
		{
			std::cin >> temp;
			tab.push_back(temp);
		}

		for (unsigned g = size; g-->0; )
		{
			std::cout << tab[g] << ' ';
		}
		std::cout << std::endl;
	}
	return 0;
}