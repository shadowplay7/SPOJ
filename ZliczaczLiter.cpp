#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {

	std::string input, whole;
	std::vector<std::vector<std::string>> stringvector;
	int iloscWierszy;
	std::cin >> iloscWierszy;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	for (int i = 0; i < iloscWierszy; ++i)
	{
		std::vector<std::string> wiersz;
		std::getline(std::cin, input);
		wiersz.push_back(input);
		stringvector.push_back(wiersz);
	}

	for (int i = 0; i < iloscWierszy; ++i)
	{
		whole.append(stringvector[i][0]);
	}

	std::string::iterator end_pos = std::remove(whole.begin(), whole.end(), ' ');
	whole.erase(end_pos, whole.end());

	std::sort(whole.begin(), whole.end());

	int flag = 0, placeSmallLetterStart=0, g=0;

	while (flag == 0)
	{
		int temp;
		temp = (int)whole[g];
		if (temp >= 65 && temp <= 90) {
			placeSmallLetterStart++;
			g++;
		}
		else
			flag++;
	}

	for (int i = placeSmallLetterStart; i < whole.size(); ++i)
	{
		size_t n = std::count(whole.begin(), whole.end(), whole[i]);
		if(whole[i] != whole[i-1])
		std::cout << whole[i] << " " << n << std::endl;
	}

	for (int i = 0; i < placeSmallLetterStart; ++i)
	{
		size_t n = std::count(whole.begin(), whole.end(), whole[i]);
		if (whole[i] != whole[i + 1])
			std::cout << whole[i] << " " << n << std::endl;
	}

	return 0;
}