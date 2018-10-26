#include <iostream>

int main() {

	int numToFind, seqLength;

	while (std::cin >> numToFind >> seqLength)
	{
		int count = 0, input;

		for (int i = 0; i < seqLength; ++i)
		{
			std::cin >> input;
			if (input == numToFind)
				count++;
		}
		std::cout << count << std::endl;
	}
	return 0;
}