#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>

struct punkt {
	std::string name;
	int x;
	int y;
	friend std::ostream& operator << (std::ostream& o, const punkt& rhs)
	{
		return o << rhs.name << " " << rhs.x << " " << rhs.y;
	}
};

bool compare(const punkt &a, const punkt &b)
{
	return sqrt(pow((abs(a.x)),2)+pow((abs(a.y)),2)) < sqrt(pow((abs(b.x)), 2) + pow((abs(b.y)), 2));
}

int main() {

	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		int nPairs;
		std::cin >> nPairs;
		std::vector<punkt> vec;

		for (int j = 0; j < nPairs; ++j)
		{
			punkt temp;
			std::string nazwa;
			int x, y;
			std::cin >> nazwa >> x >> y;
			temp.name = nazwa;
			temp.x = x;
			temp.y = y;
			vec.push_back(temp);
		}

		std::sort(vec.begin(), vec.end(), compare);

		for (int x = 0; x < nPairs; ++x)
		{
			std::cout << vec[x] << std::endl;
		}
	}
	return 0;
}
