#include <iostream>
#include <string>
#include <cctype>
#include "NumberOfDigits.h"


//¬вод числа
std::string enterNumber()
{
	std::string input;
	std::string result;

	std::cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		if (isdigit(input[i]))
		{
			result += input[i];
		}
	}
	//убрать первый символ пока он равен 0
	while (result[0] == '0')
	{
		result.erase(0, 1);
	}

	return result;
}


std::string NumberToText(std::string numbers)
{
	int sizeNumber = numbers.length();
	std::string result;
	switch (sizeNumber)
	{
	case 0:return "нуль рублей";
	case 1:return oneNumber(numbers);
	case 2:return twoNumbers(numbers);
	case 3:return threeNumbers(numbers);
	case 4:return fourNumbers(numbers);
	case 5:return fiveNumbers(numbers);
	case 6:return sixNumbers(numbers);
	case 7:return sevenNumbers(numbers);
	case 8:return eightNumbers(numbers);
	case 9:return nineNumber(numbers);
	case 10:return tenNumber(numbers);
	case 11:return elevenNumber(numbers);
	case 12:return twelveNumber(numbers);
	default: return "„исло введено некорректно";
	}
	return result;
}



