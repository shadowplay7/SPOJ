#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {

	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		double res =0.0;
		int nLength, sum_of_elems=0, pozycja;
		double odl_min = 10000000.0;
		std::vector<int> vec;
		std::cin >> nLength;
		

		for (int j = 0; j < nLength; ++j)
		{
			int temp;
			std::cin >> temp;
			vec.push_back(temp);
		}

		std::for_each(vec.begin(), vec.end(), [&](int n) {
			sum_of_elems += n;
		});

		res = (double)sum_of_elems / (double)nLength;

		for (int j = 0; j < nLength; ++j)
		{
			double odleglosc = std::fabs(res - vec[j]);
			if (odleglosc < odl_min)
			{
				odl_min = odleglosc;
				pozycja = j;
			}
		}
		std::cout << vec[pozycja] << std::endl;
	}
	return 0;
}