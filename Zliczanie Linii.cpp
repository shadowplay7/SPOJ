#include <iostream>
#include <string>

int main() {

	std::string input;
	int counter = 0;

	while (getline(std::cin,input))
	{
		counter++;
	}
	std::cout << counter << std::endl;
	return 0;
}