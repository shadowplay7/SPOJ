#include <iostream>
#include <vector>
#include <algorithm>

int main() {

	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		int numCount;
		std::vector<int> vec;

		std::cin >> numCount;
			for (int j = 0; j < numCount; ++j)
			{
				int temp;
				std::cin >> temp;
				vec.push_back(temp);
			}
			
		std::rotate(vec.begin(), vec.begin() + 1, vec.end());
			
		for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
			std::cout << *it << ' ';
		std::cout << std::endl;
	}
	return 0;
}