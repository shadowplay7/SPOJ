#include <iostream>
#include <math.h>

bool is_integer(float k)
{
	return floor(k) == k;
}

int main() {

	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		int eatersCount, cookieAmount, eatDuration;
		float boxCounter =0;

		std::cin >> eatersCount >> cookieAmount;
		for (int j = 0; j < eatersCount; ++j)
			{
			std::cin >> eatDuration;
			boxCounter = ((float)(86400 / eatDuration) / (float)cookieAmount)+boxCounter;
			}
		
		if (!is_integer(boxCounter))
			std::cout << floor(boxCounter + 1) << std::endl;
		else
			std::cout << boxCounter << std::endl;
	}
	return 0;
}