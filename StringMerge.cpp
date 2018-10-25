#include <iostream> 
#include <string>

int main(){  
	
	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		std::string string1, string2, stringFinal;
		std::cin >> string1 >> string2;
		
			for (int j = 0; j < (string1.size() + string2.size()); ++j)
			{
				if (string1[j] == '\0' || string2[j] == '\0')
					break;
				else {
					stringFinal.push_back(string1[j]);
					stringFinal.push_back(string2[j]);
				}
			}
			std::cout << stringFinal << std::endl;
	}
	return 0; 
} 