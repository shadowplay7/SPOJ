#include <iostream>
#include <string>

int main() {

	std::string input;
	
	while (std::cin >> input)
	{
		for (int i = input.size()-1; i >= 0; --i)
		{
			std::cout << input[i];
		}
		std::cout << std::endl;
	}
	return 0;
}