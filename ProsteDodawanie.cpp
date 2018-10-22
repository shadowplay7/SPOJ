#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int liczbaTestow, liczbaCyfr, temp;
	cin >> liczbaTestow;

	for (int i = 0; i < liczbaTestow; i++)
	{
		int wynik = 0;
		cin >> liczbaCyfr;
		vector<int> liczby;
		for (int j = 0; j < liczbaCyfr; j++)
		{
			cin >> temp;
			liczby.push_back(temp);
			wynik += liczby[j];
		}
		cout << wynik << endl;
	}
	return 0;
}