#include <iostream>
#include <vector>

int main(){

	std::vector<long int> vec;
	int testCases, border;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		long int temp;
		std::cin >> temp;
		vec.push_back(temp);
	}

	char sign;
	std::cin >> sign >> border;

	if (sign == '>')
		for (const auto& i : vec)
		{
			if (i > border)
				std::cout << i << std::endl;
		}
	else
		for (const auto& i : vec)
		{
			if (i < border)
				std::cout << i << std::endl;
		}
	return 0;
}