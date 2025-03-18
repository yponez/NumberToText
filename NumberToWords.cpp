#include "Numbers.h"
#include <iostream>
#include <string>
#include <cctype>

char Exit();

int main()
{
	setlocale(LC_ALL, "Russian");
	while (true)
	{
		std::cout << "Введите число: ";
		std::string numbers = enterNumber();
		std::cout << NumberToText(numbers) << std::endl;
		if (Exit() == 'q')
		{
			std::cout << "Выход из программы";
			break;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

char Exit() 
{
	std::cout << "Введите 'q' для выхода: ";
	char exit;
	std::cin >> exit;
	return exit;
}
