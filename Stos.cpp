#include <iostream>
#include <vector>

int main() {

	char input;
	int num;
	std::vector<int> vec;

	while (std::cin >> input)
	{
		switch (input)
		{
		case'+':
			std::cin >> num;
			vec.push_back(num);
			if (vec.size() <= 10)
			{
				std::cout << ":)" << std::endl;
			}
			else
				std::cout << ":(" << std::endl;
			break;
		case'-':
			if (vec.size() >= 1) {
				std::cout << vec.back() << std::endl;
				vec.pop_back();
			}
			else
				std::cout << ":(" << std::endl;
			break;
		}
	}
	return 0;
}