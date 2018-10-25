#include <iostream>
#include <vector>

int main() {

	int iloscWierszy, iloscKolumn;

	while (std::cin >> iloscWierszy >> iloscKolumn)
	{
		std::vector<std::vector<int>> kolumna;

		for (int j = 0; j < iloscWierszy; j++)
		{
			std::vector<int> wiersz;

			for (int i = 0; i < iloscKolumn; i++)
			{
				int input=0;
				std::cin >> input;
				wiersz.push_back(input);
			}
			kolumna.push_back(wiersz);
		}
		
		for (int i = 0; i < iloscKolumn; ++i)
		{
			for (int j = 0; j < iloscWierszy; ++j)
			{
				std::cout << kolumna[j][i] << ' ';
			}
			std::cout << std::endl;
		}
	}
	return 0;
}