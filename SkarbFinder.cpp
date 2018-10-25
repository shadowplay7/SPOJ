#include <iostream>

int main() {

	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		int clueAmount, direction, steps, playerPosX = 0, playerPosY = 0;
		std::cin >> clueAmount;

		for (int j = 0; j < clueAmount; ++j)
		{
			std::cin >> direction >> steps;

			switch (direction)
			{
			case 0:
				playerPosY += steps;
				break;
			case 1:
				playerPosY -= steps;
				break;
			case 2:
				playerPosX -= steps;
				break;
			case 3:
				playerPosX += steps;
				break;
			}
		}

		if (playerPosX == 0 && playerPosY == 0)
			std::cout << "studnia" << std::endl;

		else if (playerPosX == 0 && playerPosY > 0)
			std::cout << "0 " << playerPosY << std::endl;

		else if (playerPosX == 0 && playerPosY < 0)
			std::cout << "1 " << playerPosY * (-1) << std::endl;

		else if (playerPosX > 0 && playerPosY == 0)
			std::cout << "2 " << playerPosX << std::endl;

		else if (playerPosX < 0 && playerPosY == 0)
			std::cout << "3 " << playerPosX * (-1) << std::endl;

		else if (playerPosX > 0 && playerPosY > 0) {
			std::cout << "0 " << playerPosY << std::endl;
			std::cout << "3 " << playerPosX << std::endl;
		}

		else if (playerPosX < 0 && playerPosY > 0) {
			std::cout << "0 " << playerPosY << std::endl;
			std::cout << "2 " << playerPosX * (-1) << std::endl;
		}
		else if (playerPosX > 0 && playerPosY < 0) {
			std::cout << "1 " << playerPosY * (-1) << std::endl;
			std::cout << "3 " << playerPosX << std::endl;
		}

		else if (playerPosX < 0 && playerPosY < 0) {
			std::cout << "1 " << playerPosY * (-1) << std::endl;
			std::cout << "2 " << playerPosX * (-1) << std::endl;
		}
	}
	return 0;
}