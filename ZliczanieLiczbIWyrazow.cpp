#include <iostream>
#include <string>
#include <sstream>

int main() {

	std::string input, word;

	while (getline(std::cin, input))
	{
		int wordCounter = 0, numCounter = 0;
		std::stringstream line(input);
		while (line >> word)
		{
			if (isdigit(word[0]))
				numCounter++;
			else
				wordCounter++;
		}
		std::cout << numCounter << " " << wordCounter << std::endl;
	}
	return 0;
}