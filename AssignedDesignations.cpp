#include <iostream>
#include <string>
#include <cctype>



std::string thousands(char number)
{
	switch (number) 
	{
	case '0': return "тысяч ";
	case '1': return "тысяча ";
	case '2': return "тысячи ";
	case '3': return "тысячи ";
	case '4': return "тысячи ";
	case '5': return "тысяч ";
	case '6': return "тысяч ";
	case '7': return "тысяч ";
	case '8': return "тысяч ";
	case '9': return "тысяч ";
	default: return "";
	}
}

std::string millions(char number)
{
	switch (number)
	{
	case '0': return "миллионов ";
	case '1': return "миллион ";
	case '2': return "миллиона ";
	case '3': return "миллиона ";
	case '4': return "миллиона ";
	case '5': return "миллионов ";
	case '6': return "миллионов ";
	case '7': return "миллионов ";
	case '8': return "миллионов ";
	case '9': return "миллионов ";
	default: return "";
	}
}

std::string billions(char number)
{
	switch (number)
	{
	case '0': return "миллиардов ";
	case '1': return "миллиард ";
	case '2': return "миллиарда ";
	case '3': return "миллиарда ";
	case '4': return "миллиарда ";
	case '5': return "миллиардов ";
	case '6': return "миллиардов ";
	case '7': return "миллиардов ";
	case '8': return "миллиардов ";
	case '9': return "миллиардов ";
	default: return "";
	}
}

std::string rubles(char number)
{
	switch (number)
	{
	case '0': return "рублей ";
	case '1': return "рубль ";
	case '2': return "рубля ";
	case '3': return "рубля ";
	case '4': return "рубля ";
	case '5': return "рублей ";
	case '6': return "рублей ";
	case '7': return "рублей ";
	case '8': return "рублей ";
	case '9': return "рублей ";
	default: return "";
	}
}

std::string checkTenRubles(char ten, char ones) {
	if (ten == '1') {
		return "рублей ";
	}
	else
	{
		return rubles(ones);
	}
}

std::string checkTenThousand(char ten, char ones) {
	if (ten == '1') {
		return "тысяч ";
	}
	else
	{
		return thousands(ones);
	}
}

std::string checkTenMillions(char ten, char ones) {
	if (ten == '1') {
		return "миллионов ";
	}
	else
	{
		return millions(ones);
	}
}

std::string checkTenBillions(char ten, char ones) {
	if (ten == '1') {
		return "миллиардов ";
	}
	else
	{
		return billions(ones);
	}
}