#include <iostream>
#include <vector>

int main() {

	int testCases, temp=0;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		std::vector<int> vecParzyste, vecNieParzyste, vecRes;
		int numCount, input;

		std::cin >> numCount;

		for (int j = 1; j <= numCount; ++j)
		{
			std::cin >> input;
			if (j % 2 == 0)
				vecParzyste.push_back(input);
			else
				vecNieParzyste.push_back(input);
		}
		
		vecRes.reserve(vecParzyste.size() + vecNieParzyste.size());
		vecRes.insert(vecRes.end(), vecParzyste.begin(), vecParzyste.end());
		vecRes.insert(vecRes.end(), vecNieParzyste.begin(), vecNieParzyste.end());

		for (auto i = vecRes.begin(); i != vecRes.end(); ++i)
			std::cout << *i << ' ';
		
		std::cout << std::endl;
	}

	return 0;
}