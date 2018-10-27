#include <iostream>
#include <string>

int main() {

	std::string input;
	
	while (std::getline(std::cin, input))
	{
		int flag = 0;
		for (int i = 0; i < input.size(); ++i )
		{
			if (input[i] == '<') {
				flag = 1;
				std::cout << input[i];
				continue;
			}
			if (input[i] == '>') {
				flag = 0;
				std::cout << input[i];
				continue;
			}
			
			if (flag == 1) {
				input[i] = toupper(input[i]);
				std::cout << input[i];
			}
			else
				std::cout << input[i];
		}
		std::cout << std::endl;
	}
	return 0;
}