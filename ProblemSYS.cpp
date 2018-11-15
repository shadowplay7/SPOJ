#include <iostream>

void print_pos(int value, int pos)
{
	if (value == 0)
		return;

	int rem = value % pos;
	value /= pos;
	print_pos(value, pos);

	if (rem > 9)
		std::cout << (char)(rem - 10 + 'A');
	else
		std::cout << rem;
}

int main() {
	
	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		long dec;
		std::cin >> dec;
		print_pos(dec, 16);
		std::cout << " ";
		print_pos(dec, 11);
		std::cout << std::endl;
	}
	return 0;
}