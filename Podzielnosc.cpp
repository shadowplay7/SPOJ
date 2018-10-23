#include <iostream>

void WypiszPodzielne(int x, int y, int n) {
	
	for (int i = 1; i < n; ++i)
	{
		if (i%x == 0 && i%y != 0)
			std::cout << i << ' ';
	}
	std::cout << std::endl;
}

int main() {

	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		int x, y, n;
		std::cin >> n >> x >> y;
		WypiszPodzielne(x, y, n);
	}
	return 0;
}