#include <iostream>

#define maxn 1002

int c[maxn][maxn];

int main()
{
	for (int i = 0; i < maxn; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if ((j == 0) || (j == i)) c[i][j] = 1;
			else c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
		}
	}
	int t;
	std::cin >> t;
	while (t--)
	{
		int n, k;
		std::cin >> n >> k;
		std::cout << c[n + 1][k] << std::endl;
	}
	return 0;
}