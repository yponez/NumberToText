#include <iostream>
#include <string>
#include <cctype>

std::string getDigitones(char digit) {
	switch (digit)
	{
	case '1': return "один ";
	case '2': return "два ";
	case '3': return "три ";
	case '4': return "четыре ";
	case '5': return "пять ";
	case '6': return "шесть ";
	case '7': return "семь ";
	case '8': return "восемь ";
	case '9': return "девять ";
	default: return "";
	}
}

std::string getDigittens(char digit) {
	switch (digit) 
	{
	case '2': return "двадцать ";
	case '3': return "тридцать ";
	case '4': return "сорок ";
	case '5': return "пятьдесят ";
	case '6': return "шестьдесят ";
	case '7': return "семьдесят ";
	case '8': return "восемьдесят ";
	case '9': return "девяносто ";
	default: return "";
	}
}

std::string getDigithundreds(char digit) {
	switch (digit) 
	{
	case '1': return "сто ";
	case '2': return "двести ";
	case '3': return "триста ";
	case '4': return "четыреста ";
	case '5': return "пятьсот ";
	case '6': return "шестьсот ";
	case '7': return "семьсот ";
	case '8': return "восемьсот ";
	case '9': return "девятьсот ";
	default: return "";
	}
}

std::string getDigitthousandones(char digit) {
	switch (digit)
	{
	case '1': return "одна ";
	case '2': return "две ";
	case '3': return "три ";
	case '4': return "четыре ";
	case '5': return "пять ";
	case '6': return "шесть ";
	case '7': return "семь ";
	case '8': return "восемь ";
	case '9': return "девять ";
	default: return "";
	}
}


std::string handleTeens(char tens, char ones) {
	switch (ones)
	{
	case '0': return "десять ";
	case '1': return "одиннадцать ";
	case '2': return "двенадцать ";
	case '3': return "тринадцать ";
	case '4': return "четырнадцать ";
	case '5': return "пятнадцать ";
	case '6': return "шестнадцать ";
	case '7': return "семнадцать ";
	case '8': return "восемнадцать ";
	case '9': return "девятнадцать ";
	default: return "";
	}
}