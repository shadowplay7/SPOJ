#include <iostream>
#include <string>

int main() {

	std::string input;

	while (getline(std::cin, input))
	{
		for (int i = 0; i < input.length(); ++i)
		{
			if ((int)input[i] != 32 && (int)input[i] != (int)input[0])
				std::cout << input[i];
			else
				continue;
		}
		std::cout << std::endl;
	}
	return 0;
}