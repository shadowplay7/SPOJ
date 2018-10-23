#include <iostream>

int main() {
	
	char input;
	int a,b;

	while (std::cin >> input) {

		std::cin >> a >> b;
		switch (input)
		{
		case '+':
			std::cout << a + b << std::endl;
			break;
		case '-':
			std::cout << a - b << std::endl;
			break;
		case '*':
			std::cout << a * b << std::endl;
			break;
		case '/':
			std::cout << a / b << std::endl;
			break;
		case '%':
			std::cout << a % b << std::endl;
			break;
		}
	}
	return 0;
}