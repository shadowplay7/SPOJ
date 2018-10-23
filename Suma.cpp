#include <iostream>

int main() {

	int input, wynik=0;

	while (std::cin >> input)
	{
		wynik += input;
		std::cout << wynik << std::endl;
	}
	return 0;
}