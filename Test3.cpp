#include <iostream>

int main() {

	int input, flag = 0, counter = 0;

	while (std::cin >> input)
	{
		if (input == 42 && flag == 1) counter++;

		if (input != 42) {
			flag = 1;
			std::cout << input << std::endl;
		}
		else {
			flag = 0;
			std::cout << input << std::endl;
		}
		if (counter == 3) break;
	}
	return 0;
}