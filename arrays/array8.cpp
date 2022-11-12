#include <iostream>


void oneDigit(int digit, bool bigLetter, bool toIncline)
{
	if (!toIncline)
	{
		if (bigLetter)
		{
			string oneDgtToWord[] = { "Ноль","Один","Два","Три","Четыре","Пять","Шесть","Семь","Восемь","Девять" };
			std::cout << oneDgtToWord[digit];
		}
		else
		{
			string oneDgtToWord[] = { "","один ","два ","три ","четыре ","пять ","шесть ","семь ","восемь ","девять " };
			std::cout << oneDgtToWord[digit];
		}
	}
	else
	{
		if (bigLetter)
		{
			string oneDgtToWord[] = { "","","Две ","Три ","Четыре ","Пять ","Шесть ","Семь ","Восемь ","Девять " };
			std::cout << oneDgtToWord[digit];
		}
		else
		{
			string oneDgtToWord[] = { "","одна ","две ","три ","четыре ","пять ","шесть ","семь ","восемь ","девять " };
			std::cout << oneDgtToWord[digit];
		}
	}

	return;
}

void twoDigit(int* digits, bool bigLetter, bool toIncline)
{
	if (bigLetter)
	{
		if (digits[0] == 1)
		{
			switch (digits[1])
			{
			case 0:
				std::cout << "Десять ";
				break;
			case 1:
				std::cout << "Одиннадцать ";
				break;
			case 2:
				std::cout << "Двенадцать ";
				break;
			case 3:
				std::cout << "Тринадцать ";
				break;
			case 4:
				std::cout << "Четырнадцать ";
				break;
			case 5:
				std::cout << "Пятнадцать ";
				break;
			case 6:
				std::cout << "Шестнадцать ";
				break;
			case 7:
				std::cout << "Семьнадцать ";
				break;
			case 8:
				std::cout << "Восемьнадцать ";
				break;
			case 9:
				std::cout << "Девятнадцать ";
				break;
			default:
				break;
			}
		}


		else
		{
			switch (digits[0])
			{
			case 2:
				std::cout << "Двадцать ";
				break;
			case 3:
				std::cout << "Тридцать ";
				break;
			case 4:
				std::cout << "Сорок ";
				break;
			case 5:
				std::cout << "Пятьдесят ";
				break;
			case 6:
				std::cout << "Шестьдесят ";
				break;
			case 7:
				std::cout << "Семьдесят ";
				break;
			case 8:
				std::cout << "Восемьдесят ";
				break;
			case 9:
				std::cout << "Девяносто ";
				break;
			default:
				break;
			}

			if (digits[1] == 0)
			{
				return;
			}
			else
			{
				oneDigit(digits[1], 0, toIncline);
				return;
			}
		}
	}
	else
	{
		if (digits[0] == 1)
		{
			switch (digits[1])
			{
			case 0:
				std::cout << "десять ";
				break;
			case 1:
				std::cout << "одиннадцать ";
				break;
			case 2:
				std::cout << "двенадцать ";
				break;
			case 3:
				std::cout << "тринадцать ";
				break;
			case 4:
				std::cout << "четырнадцать ";
				break;
			case 5:
				std::cout << "пятнадцать ";
				break;
			case 6:
				std::cout << "шестнадцать ";
				break;
			case 7:
				std::cout << "семьнадцать ";
				break;
			case 8:
				std::cout << "восемьнадцать ";
				break;
			case 9:
				std::cout << "девятнадцать ";
				break;
			default:
				break;
			}
		}


		else
		{
			switch (digits[0])
			{
			case 2:
				std::cout << "двадцать ";
				break;
			case 3:
				std::cout << "тридцать ";
				break;
			case 4:
				std::cout << "сорок ";
				break;
			case 5:
				std::cout << "пятьдесят ";
				break;
			case 6:
				std::cout << "шестьдесят ";
				break;
			case 7:
				std::cout << "семьдесят ";
				break;
			case 8:
				std::cout << "восемьдесят ";
				break;
			case 9:
				std::cout << "девяносто ";
				break;
			default:
				break;
			}

			if (digits[1] == 0)
			{
				return;
			}
			else
			{
				oneDigit(digits[1], 0, toIncline);
				return;
			}
		}
	}
}

void threeDigit(int* digits, bool bigLetter, bool toIncline)
{
	if (bigLetter)
	{
		switch (digits[0])
		{
		case 1:
			std::cout << "Сто ";
			break;
		case 2:
			std::cout << "Двести ";
			break;
		case 3:
			std::cout << "Триста ";
			break;
		case 4:
			std::cout << "Четыреста ";
			break;
		case 5:
			std::cout << "Пятьсот ";
			break;
		case 6:
			std::cout << "Шестьсот ";
			break;
		case 7:
			std::cout << "Семьсот ";
			break;
		case 8:
			std::cout << "Восемьсот ";
			break;
		case 9:
			std::cout << "Девятьсот ";
			break;
		default:
			break;
		}
	}
	else
	{
		switch (digits[0])
		{
		case 1:
			std::cout << "сто ";
			break;
		case 2:
			std::cout << "двести ";
			break;
		case 3:
			std::cout << "триста ";
			break;
		case 4:
			std::cout << "четыреста ";
			break;
		case 5:
			std::cout << "пятьсот ";
			break;
		case 6:
			std::cout << "шестьсот ";
			break;
		case 7:
			std::cout << "семьсот ";
			break;
		case 8:
			std::cout << "восемьсот ";
			break;
		case 9:
			std::cout << "девятьсот ";
			break;
		default:
			break;
		}
	}

	if (digits[1] != 0)
	{
		int twodigits[] = { digits[1],digits[2] };
		twoDigit(twodigits, 0, toIncline);
	}
	else
	{
		oneDigit(digits[2], 0, toIncline);
	}
}

void underMillion(int* digits, int amtofdigits, bool bigLetter)
{
	int n = amtofdigits - 3;
	int* tdigits = new int[n];

	for (int i = 0; i < n; ++i)
	{
		tdigits[i] = digits[i];
	}

	if (n == 1 && tdigits[0] == 1 && bigLetter)
	{
		std::cout << "Тысяча ";
	}
	else
	{
		switch (n)
		{
		case 1:
			oneDigit(tdigits[0], bigLetter, 1);
			break;
		case 2:
			twoDigit(tdigits, bigLetter, 1);
			break;
		case 3:
			threeDigit(tdigits, bigLetter, 1);
			break;
		default:
			break;
		}

		int a = tdigits[n - 1], b = tdigits[n - 2];
		if (a == 1)
		{
			std::cout << "тысяча ";
		}
		else if ((a > 1 && a < 5 && b == 0) || (a == 2 && b != 1))
		{
			std::cout << "тысячи ";
		}
		else
		{
			std::cout << "тысяч ";
		}
	}
	if (digits[n] == 0)
	{
		int tdigits2[] = { digits[n + 1],digits[n + 2] };
		twoDigit(tdigits2, 0, 0);
	}
	else
	{
		int tdigits2[] = { digits[n], digits[n + 1],digits[n + 2] };
		threeDigit(tdigits2, 0, 0);
	}
}

void underBillion(int* digits, int amtofdigits)
{
	int n = amtofdigits - 6;
	int* tdigits = new int[n];

	for (int i = 0; i < n; ++i)
	{
		tdigits[i] = digits[i];
	}

	if (n == 1 && tdigits[0] == 1)
	{
		std::cout << "Миллион ";
	}
	else
	{
		switch (n)
		{
		case 1:
			oneDigit(tdigits[0], 1, 0);
			break;
		case 2:
			twoDigit(tdigits, 1, 0);
			break;
		case 3:
			threeDigit(tdigits, 1, 0);
			break;
		default:
			break;
		}

		int a = tdigits[n - 1];
		if (a == 1 && tdigits[n - 2] != 1)
		{
			std::cout << "миллион ";
		}
		else if (a > 1 && a < 5 && tdigits[n - 2] != 1)
		{
			std::cout << "миллиона ";
		}
		else
		{
			std::cout << "миллионов ";
		}
	}

	if (digits[n] == 0 && digits[n + 1] == 0 && digits[n + 2] == 0)
	{
		int tdigits[3];
		for (int i = 0; i < 3; ++i)
		{
			tdigits[i] = digits[n + 3];
			++n;
		}

		if (tdigits[0] == 0 && tdigits[1] == 0)
		{
			oneDigit(tdigits[2], 0, 0);
			return;
		}
		else if (tdigits[0] == 0)
		{
			int tdigits2[] = { tdigits[1], tdigits[2] };
			twoDigit(tdigits2, 0, 0);
			return;
		}
		else
		{
			threeDigit(tdigits, 0, 0);
			return;
		}
	}

	if (digits[n] == 0 && digits[n + 1] == 0)
	{
		int tdigits[4];
		for (int i = 0; i < 4; ++i)
		{
			tdigits[i] = digits[n + 2];
			++n;
		}
		underMillion(tdigits, 4, 0);
	}
	else if (digits[n] == 0)
	{
		int tdigits[5];
		for (int i = 0; i < 5; ++i)
		{
			tdigits[i] = digits[n + 1];
			++n;
		}
		underMillion(tdigits, 5, 0);
	}
	else
	{
		int tdigits[6];
		for (int i = 0; i < 6; ++i)
		{
			tdigits[i] = digits[n];
			++n;
		}
		underMillion(tdigits, 6, 0);
	}
}


void convertToWord(int number, int amtofdigits)
{
	int* digits = new int[amtofdigits];
	int degree10 = pow(10, amtofdigits - 1), temp = number;
	digits[0] = number / degree10;
	for (int i = 1; i < amtofdigits; ++i)
	{
		degree10 = degree10 / 10;
		temp = temp - digits[i - 1] * degree10 * 10;
		digits[i] = temp / degree10;

	}

	for (int i = 0; i < amtofdigits; i++)
	{
		std::cout << digits[i];
	}

	std::cout << std::endl;

	switch (amtofdigits)
	{
	case 1:
		oneDigit(digits[0], 1, 0);
		return;
	case 2:
		twoDigit(digits, 1, 0);
		return;
	case 3:
		threeDigit(digits, 1, 0);
		return;
	default:
		break;
	}


	if (amtofdigits < 7)
	{
		underMillion(digits, amtofdigits, 1);
	}

	else if (amtofdigits < 10)
	{
		underBillion(digits, amtofdigits);
	}

	std::cout << std::endl;
}


int main()
{
	setlocale(LC_ALL, "ru");
	int number, amtofdigits = 1;
	std::cin >> number;

	if (number == 1000000000)
	{
		std::cout << "Миллиард " << std::endl;
		return 0;
	}
	if (number > 1000000000)
	{
		std::cout << "Вы вышли за диапазон допустимых чисел." << std::endl;
		return 0;
	}
	int val = number;
	for (; val > 9;)
	{
		val = val / 10;
		++amtofdigits;
	}

	convertToWord(number, amtofdigits);
	return 0;
}
