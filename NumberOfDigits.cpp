#include <iostream>
#include <string>
#include <cctype>
#include "CaseDigit.h"
#include "AssignedDesignations.h"

// проверка на числа от 10 до 19
std::string checkForTen(char ten, char unit)
{
	std::string result;
	if (ten == '1')
	{
		result.append(handleTeens(ten, unit));
	}
	else
	{
		result.append(getDigittens(ten));
		result.append(getDigitones(unit));
	}
	return result;
}

// проверка на числа от 10 до 19 но в тысячах
std::string checkForTenThousand(char ten, char unit)
{
	std::string result;
	if (ten == '1')
	{
		result.append(handleTeens(ten, unit));
	}
	else
	{
		result.append(getDigittens(ten));
		result.append(getDigitthousandones(unit));

	}
	result.append(checkTenThousand(ten, unit));
	return result;
}

// проверка на числа от 10 до 19 но в миллионах
std::string checkForTenMillions(char ten, char unit)
{
	std::string result;
	if (ten == '1')
	{
		result.append(handleTeens(ten, unit));
	}
	else
	{
		result.append(getDigittens(ten));
		result.append(getDigitones(unit));

	}
	result.append(checkTenMillions(ten, unit));
	return result;
}

// проверка на необходимость приписыапть "тысячи"
std::string checkThousandisNull(char hundredsthousand, char tenthousand, char onesthousand)
{
	std::string result;
	if (hundredsthousand == '0' and tenthousand == '0' and onesthousand == '0')
	{
		result = "";
	}
	else
	{
		result.append(checkForTenThousand(tenthousand, onesthousand));
	}
	return result;
}

// проверка на необходимость приписыапть "миллионы"
std::string checkMillionsisNull(char hundredmillions, char tenmillions, char onesmillion)
{
	std::string result;
	if (hundredmillions == '0' and tenmillions == '0' and onesmillion == '0')
	{
		result = "";
	}
	else
	{
		result.append(checkForTenMillions(tenmillions, onesmillion));
	}
	return result;
}

//числа от 1 до 9 (единицы)
std::string oneNumber(std::string numbers)
{
	std::string result;
	char ones = numbers[0];
	result.append(getDigitones(ones));
	result.append(rubles(ones));
	return result;
}

//числа от 10 до 99 (десятки)
std::string twoNumbers(std::string numbers)
{
	std::string result;
	char tens = numbers[0];
	char ones = numbers[1];
	result.append(checkForTen(tens, ones));
	result.append(checkTenRubles(tens, ones));
	return result;
}

//числа от 100 до 999 (сотни)
std::string threeNumbers(std::string numbers)
{
	std::string result;
	char hundreds = numbers[0];
	char tens = numbers[1];
	char ones = numbers[2];
	result.append(getDigithundreds(hundreds));
	result.append(checkForTen(tens, ones));
	result.append(checkTenRubles(tens, ones));
	return result;
}

//числа от 1000 до 9999 (тысячи)
std::string fourNumbers(std::string numbers)
{
	std::string result;
	char thousand = numbers[0];
	char hundreds = numbers[1];
	char tens = numbers[2];
	char ones = numbers[3];
	result.append(getDigitthousandones(thousand));
	result.append(thousands(thousand));
	result.append(getDigithundreds(hundreds));
	result.append(checkForTen(tens, ones));
	result.append(checkTenRubles(tens, ones));
	return result;
}

//числа от 10000 до 99999 (десятки тысяч)
std::string fiveNumbers(std::string numbers)
{
	std::string result;
	char tensthousand = numbers[0];
	char thousand = numbers[1];
	char hundreds = numbers[2];
	char tens = numbers[3];
	char ones = numbers[4];
	result.append(checkForTenThousand(tensthousand, thousand));
	result.append(getDigithundreds(hundreds));
	result.append(checkForTen(tens, ones));
	result.append(checkTenRubles(tens, ones));
	return result;
}

//числа от 100000 до 999999 (сотни тысяч)
std::string sixNumbers(std::string numbers)
{
	std::string result;
	char hundredthousend = numbers[0];
	char tensthousand = numbers[1];
	char thousand = numbers[2];
	char hundreds = numbers[3];
	char tens = numbers[4];
	char ones = numbers[5];
	result.append(getDigithundreds(hundredthousend));
	result.append(checkForTenThousand(tensthousand, thousand));
	result.append(getDigithundreds(hundreds));
	result.append(checkForTen(tens, ones));
	result.append(checkTenRubles(tens, ones));
	return result;
}

//числа от 1000000 до 9999999 (миллионы)
std::string sevenNumbers(std::string numbers)
{
	std::string result;
	char million = numbers[0];
	char hundredthousend = numbers[1];
	char tensthousand = numbers[2];
	char thousand = numbers[3];
	char hundreds = numbers[4];
	char tens = numbers[5];
	char ones = numbers[6];
	result.append(getDigitones(million));
	result.append(millions(million));
	result.append(getDigithundreds(hundredthousend));
	result.append(checkThousandisNull(hundredthousend, tensthousand, thousand));
	result.append(getDigithundreds(hundreds));
	result.append(checkForTen(tens, ones));
	result.append(checkTenRubles(tens, ones));
	return result;
}

//числа от 10000000 до 99999999 (десятки миллионов)
std::string eightNumbers(std::string numbers)
{
	std::string result;
	char tenmillions = numbers[0];
	char million = numbers[1];
	char hundredthousend = numbers[2];
	char tensthousand = numbers[3];
	char thousand = numbers[4];
	char hundreds = numbers[5];
	char tens = numbers[6];
	char ones = numbers[7];
	result.append(checkForTen(tenmillions, million));
	result.append(checkTenMillions(tenmillions, million));
	result.append(getDigithundreds(hundredthousend));
	result.append(checkThousandisNull(hundredthousend, tensthousand, thousand));
	result.append(getDigithundreds(hundreds));
	result.append(checkForTen(tens, ones));
	result.append(checkTenRubles(tens, ones));
	return result;
}

//числа от 100000000 до 999999999 (сотни миллионов)
std::string nineNumber(std::string numbers)
{
	std::string result;
	char hundredmillions = numbers[0];
	char tenmillions = numbers[1];
	char million = numbers[2];
	char hundredthousend = numbers[3];
	char tensthousand = numbers[4];
	char thousand = numbers[5];
	char hundreds = numbers[6];
	char tens = numbers[7];
	char ones = numbers[8];
	result.append(getDigithundreds(hundredmillions));
	result.append(checkForTen(tenmillions, million));
	result.append(checkTenMillions(tenmillions, million));
	result.append(getDigithundreds(hundredthousend));
	result.append(checkThousandisNull(hundredthousend, tensthousand, thousand));
	result.append(getDigithundreds(hundreds));
	result.append(checkForTen(tens, ones));
	result.append(checkTenRubles(tens, ones));
	return result;
}

//числа от 1000000000 до 9999999999 (миллиарды)
std::string tenNumber(std::string numbers)
{
	std::string result;
	char billion = numbers[0];
	char hundredmillions = numbers[1];
	char tenmillions = numbers[2];
	char million = numbers[3];
	char hundredthousend = numbers[4];
	char tensthousand = numbers[5];
	char thousand = numbers[6];
	char hundreds = numbers[7];
	char tens = numbers[8];
	char ones = numbers[9];
	result.append(getDigitones(billion));
	result.append(billions(billion));
	result.append(getDigithundreds(hundredmillions));
	result.append(checkMillionsisNull(hundredmillions, tenmillions, million));
	result.append(getDigithundreds(hundredthousend));
	result.append(checkThousandisNull(hundredthousend, tensthousand, thousand));
	result.append(getDigithundreds(hundreds));
	result.append(checkForTen(tens, ones));
	result.append(checkTenRubles(tens, ones));
	return result;
}

//числа от 10000000000 до 99999999999 (десятки миллиардов)
std::string elevenNumber(std::string numbers)
{
	std::string result;
	char tenbillions = numbers[0];
	char billion = numbers[1];
	char hundredmillions = numbers[2];
	char tenmillions = numbers[3];
	char million = numbers[4];
	char hundredthousend = numbers[5];
	char tensthousand = numbers[6];
	char thousand = numbers[7];
	char hundreds = numbers[8];
	char tens = numbers[9];
	char ones = numbers[10];
	result.append(checkForTen(tenbillions, billion));
	result.append(checkTenBillions(tenbillions, billion));
	result.append(checkMillionsisNull(hundredmillions, tenmillions, million));
	result.append(getDigithundreds(hundredthousend));
	result.append(checkThousandisNull(hundredthousend, tensthousand, thousand));
	result.append(getDigithundreds(hundreds));
	result.append(checkForTen(tens, ones));
	result.append(checkTenRubles(tens, ones));
	return result;
}

//числа от 100000000000 до 999999999999 (сотни миллиардов)
std::string twelveNumber(std::string numbers)
{
	std::string result;
	char hundredbillions = numbers[0];
	char tenbillions = numbers[1];
	char billion = numbers[2];
	char hundredmillions = numbers[3];
	char tenmillions = numbers[4];
	char million = numbers[5];
	char hundredthousend = numbers[6];
	char tensthousand = numbers[7];
	char thousand = numbers[8];
	char hundreds = numbers[9];
	char tens = numbers[10];
	char ones = numbers[11];
	result.append(getDigithundreds(hundredbillions));
	result.append(checkForTen(tenbillions, billion));
	result.append(checkTenBillions(tenbillions, billion));
	result.append(checkMillionsisNull(hundredmillions, tenmillions, million));
	result.append(getDigithundreds(hundredthousend));
	result.append(checkThousandisNull(hundredthousend, tensthousand, thousand));
	result.append(getDigithundreds(hundreds));
	result.append(checkForTen(tens, ones));
	result.append(checkTenRubles(tens,ones));
	return result;
}
