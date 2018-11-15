#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

int main() {

	std::string input;
	long long sum_of_all = 0;

	while (getline(std::cin, input))
	{
		std::vector<long long> vec;
		std::stringstream iss(input);
		long long temp, sum = 0;

		while (iss >> temp)
			vec.push_back(temp);

		std::for_each(vec.begin(), vec.end(), [&](long long n)
		{
			sum += n;
		});
		sum_of_all += sum;

		std::cout << sum << std::endl;
	}
	std::cout << sum_of_all << std::endl;
	return 0;
}