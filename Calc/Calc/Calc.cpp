#include "pch.h"
#include <iostream>

int main()
{
	int enterNumber1, enterNumber2, operation, answer;
	char tryAgain;

	do {
		std::cout << "Hello, my dear. What are the numbers?" << std::endl;
		std::cout << "Number 1: " << std::endl;
		std::cin >> enterNumber1;
		std::cout << "Number 2: " << std::endl;
		std::cin >> enterNumber2;

		std::cout << "What do you want to do? \n 1. + \n 2. - \n 3. * \n 4. / \n" << std::endl;
		std::cin >> operation;
		std::cout << "Your answer: " << operation;

		switch (operation)
		{
		case 1:
		{
			answer = (enterNumber1 + enterNumber2);
			break;
		}
		case 2:
		{
			answer = (enterNumber1 - enterNumber2);
			break;
		}
		case 3:
		{
			answer = (enterNumber1 * enterNumber2);
			break;
		}
		case 4:
		{
			answer = (enterNumber1 / enterNumber2);
			break;
		}
		}

		std::cout << " Result: " << answer << std::endl;
		std::cout << "Do you want to try again ? y / n" << std::endl;
		std::cin >> tryAgain;
	} while (tryAgain == 'y');

	return 0;
}