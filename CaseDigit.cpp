#include <iostream>
#include <string>
#include <cctype>

std::string getDigitones(char digit) {
	switch (digit)
	{
	case '1': return "���� ";
	case '2': return "��� ";
	case '3': return "��� ";
	case '4': return "������ ";
	case '5': return "���� ";
	case '6': return "����� ";
	case '7': return "���� ";
	case '8': return "������ ";
	case '9': return "������ ";
	default: return "";
	}
}

std::string getDigittens(char digit) {
	switch (digit) 
	{
	case '2': return "�������� ";
	case '3': return "�������� ";
	case '4': return "����� ";
	case '5': return "��������� ";
	case '6': return "���������� ";
	case '7': return "��������� ";
	case '8': return "����������� ";
	case '9': return "��������� ";
	default: return "";
	}
}

std::string getDigithundreds(char digit) {
	switch (digit) 
	{
	case '1': return "��� ";
	case '2': return "������ ";
	case '3': return "������ ";
	case '4': return "��������� ";
	case '5': return "������� ";
	case '6': return "�������� ";
	case '7': return "������� ";
	case '8': return "��������� ";
	case '9': return "��������� ";
	default: return "";
	}
}

std::string getDigitthousandones(char digit) {
	switch (digit)
	{
	case '1': return "���� ";
	case '2': return "��� ";
	case '3': return "��� ";
	case '4': return "������ ";
	case '5': return "���� ";
	case '6': return "����� ";
	case '7': return "���� ";
	case '8': return "������ ";
	case '9': return "������ ";
	default: return "";
	}
}


std::string handleTeens(char tens, char ones) {
	switch (ones)
	{
	case '0': return "������ ";
	case '1': return "����������� ";
	case '2': return "���������� ";
	case '3': return "���������� ";
	case '4': return "������������ ";
	case '5': return "���������� ";
	case '6': return "����������� ";
	case '7': return "���������� ";
	case '8': return "������������ ";
	case '9': return "������������ ";
	default: return "";
	}
}