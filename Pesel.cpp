#include <iostream>
#include <string>

int main() {

	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		std::string input;
		std::cin >> input;

		int checkSum;
		checkSum = ((input[0] - 48) * 1) + ((input[1] - 48) * 3)+ ((input[2] - 48) * 7)
			+ ((input[3] - 48) * 9)+ ((input[4] - 48) * 1)+ ((input[5] - 48) * 3)+
			((input[6] - 48) * 7)+ ((input[7] - 48) * 9)+ ((input[8] - 48) * 1)+
			((input[9] - 48) * 3)+ ((input[10] - 48) * 1);
		
		if (checkSum % 10 == 0)
			std::cout << "D" << std::endl;
		else
			std::cout << "N" << std::endl;
	}
	return 0;
}