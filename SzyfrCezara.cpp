#include <iostream>
#include <string>

int main() {

	std::string input, cezar;
	
	while (std::getline(std::cin,input))
	{
		for (size_t i = 0; i < input.size(); ++i)
		{
			if (input[i] == 32) std::cout << " ";
			else if (input[i] >= 65 && input[i] <= 87)
				std::cout << (char)((char)input[i] + 3);
			else if (input[i] >= 88 && input[i] <= 90)
				std::cout << (char)((char)input[i] - 23);
		}
		std::cout << std::endl;
	}
	return 0;
}