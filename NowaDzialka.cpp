#include <iostream>

int main(){

	int testCases;
	std::cin >> testCases;
	
	for (int i = 0; i < testCases; ++i)
	{
		int krok;
		std::cin >> krok;
		std::cout << krok*krok << std::endl;
	}
	return 0;
}