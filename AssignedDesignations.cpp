#include <iostream>
#include <string>
#include <cctype>



std::string thousands(char number)
{
	switch (number) 
	{
	case '0': return "����� ";
	case '1': return "������ ";
	case '2': return "������ ";
	case '3': return "������ ";
	case '4': return "������ ";
	case '5': return "����� ";
	case '6': return "����� ";
	case '7': return "����� ";
	case '8': return "����� ";
	case '9': return "����� ";
	default: return "";
	}
}

std::string millions(char number)
{
	switch (number)
	{
	case '0': return "��������� ";
	case '1': return "������� ";
	case '2': return "�������� ";
	case '3': return "�������� ";
	case '4': return "�������� ";
	case '5': return "��������� ";
	case '6': return "��������� ";
	case '7': return "��������� ";
	case '8': return "��������� ";
	case '9': return "��������� ";
	default: return "";
	}
}

std::string billions(char number)
{
	switch (number)
	{
	case '0': return "���������� ";
	case '1': return "�������� ";
	case '2': return "��������� ";
	case '3': return "��������� ";
	case '4': return "��������� ";
	case '5': return "���������� ";
	case '6': return "���������� ";
	case '7': return "���������� ";
	case '8': return "���������� ";
	case '9': return "���������� ";
	default: return "";
	}
}

std::string rubles(char number)
{
	switch (number)
	{
	case '0': return "������ ";
	case '1': return "����� ";
	case '2': return "����� ";
	case '3': return "����� ";
	case '4': return "����� ";
	case '5': return "������ ";
	case '6': return "������ ";
	case '7': return "������ ";
	case '8': return "������ ";
	case '9': return "������ ";
	default: return "";
	}
}

std::string checkTenRubles(char ten, char ones) {
	if (ten == '1') {
		return "������ ";
	}
	else
	{
		return rubles(ones);
	}
}

std::string checkTenThousand(char ten, char ones) {
	if (ten == '1') {
		return "����� ";
	}
	else
	{
		return thousands(ones);
	}
}

std::string checkTenMillions(char ten, char ones) {
	if (ten == '1') {
		return "��������� ";
	}
	else
	{
		return millions(ones);
	}
}

std::string checkTenBillions(char ten, char ones) {
	if (ten == '1') {
		return "���������� ";
	}
	else
	{
		return billions(ones);
	}
}