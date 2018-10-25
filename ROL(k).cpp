#include<iostream>
#include<vector>
#include<algorithm>

int main() {

	int n, k, input;
	std::vector<int> vec;
	std::cin >> n >> k;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> input;
		vec.push_back(input);
	}

	for (int j = 0; j < k; ++j)
	{
		std::rotate(vec.begin(), vec.begin() + 1, vec.end());
	}

	for (auto i = vec.begin(); i != vec.end(); ++i)
		std::cout << *i << ' ';

	return 0;
}