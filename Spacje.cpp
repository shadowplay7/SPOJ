#include <iostream>
#include <string>

int main(){

	std::string input;

	while (getline(std::cin, input))
	{
		for (int i = 0; i < input.length(); ++i)
		{
			if ((int)input[i] == 32) {
				input.erase(i, 1);
				input[i] = toupper(input[i]);
			}
		}
		for (int i = 0; i < input.length(); ++i)
		{
			if ((int)input[i] != 32)
				std::cout << input[i];
		}
		std::cout << std::endl;
	}
	return 0;
}
