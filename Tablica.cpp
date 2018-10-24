#include <iostream>
#include <vector>
#include <algorithm>

int  main() {

	int input;
	std::vector<int> vec;

	while (std::cin >> input)
	{
		vec.push_back(input);
	}
	std::reverse(vec.begin(), vec.end());
	for (auto i = vec.begin(); i != vec.end(); ++i)
		std::cout << *i << ' ';
	return 0;
}