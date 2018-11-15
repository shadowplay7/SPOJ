#include <iostream>

int main() {

	int liczba;
	std::cin >> liczba;
	if (liczba == 0) { std::cout << liczba << std::endl; return 0; }
	if (liczba <= 2) { std::cout << "NIE" << std::endl; return 0; }

	for (int i = 1; i <= liczba; i = i + 2) {
		std::cout << i << " ";
	}
	for (int i = 0; i <= liczba; i = i + 2) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	return 0;
}