#include <iostream>
#include <string>

int main() {

	std::string input;

	while (std::cin >> input)
	{
		long long sum_of_them_all=0;
		for (int i = 0; i < input.length(); ++i)
		{
			if (input[i] < 'j')
			{
				sum_of_them_all += input[i] - 96;
				continue;
			}
			if (input[i] < 'u')
			{
				sum_of_them_all += 10 * (input[i] - 106);
				continue;
			}
			if (input[i] == 'v')
			{
				sum_of_them_all += 200;
				continue;
			}
			sum_of_them_all += 100 * (2 + input[i] - 119);
		}
		std::cout << sum_of_them_all << std::endl;
	}
	return 0;
}