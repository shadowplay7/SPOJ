#include <iostream>

int main() {

	char temp;
	int num1, num2;
	int tab[10];

	while (std::cin >> temp >> num1 >> num2)
	{
		switch (temp)
		{
		case 'z':
			tab[num1] = num2;
			break;
		case '+':
			std::cout << tab[num1] + tab[num2] << std::endl;
			break;
		case '-':
			std::cout << tab[num1] - tab[num2] << std::endl;
			break;
		case '*':
			std::cout << tab[num1] * tab[num2] << std::endl;
			break;
		case '/':
			std::cout << tab[num1] / tab[num2] << std::endl;
			break;
		case '%':
			std::cout << tab[num1] % tab[num2] << std::endl;
			break;
		}
	}
	return 0;
}