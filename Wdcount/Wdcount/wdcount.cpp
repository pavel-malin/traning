// подсчет числа слов в предложении с использованием перечислений
#include<iostream>

using std::cout;

#include<conio.h> // для _getche()

enum itsaWord {NO, YES}; // NO=0, YES=1

int main()
{
	setlocale(LC_ALL, "");
	itsaWord isWords = NO;  // isWords равно YES, когда 
	// вводится слово, и NO, когда вводятся пробелы
	char ch = 'a';			// считывание символа с клавиатуры
	int wordcount = 0;		// число слов
	cout << "Введите предложение: \n";
	do
	{
		ch = _getche();		// ввод символа
		if (ch == ' ' || ch == '\r') // если введен пробел,
		{
			if (isWords == YES) // а до этого вводилось слово.
			{					// значит, слово закончилось
				wordcount++;	// учет слова
				isWords = NO;	// сброс флага
			}
		}						// в противном случае
		else                    // ввод слова продолжается 
			if (isWords == NO)  // если начался ввод слова.
				isWords = YES;  // то устанавливаем флаг 
	} while (ch != '\r');      // выход по нажатию Enter
	cout << "\n----Число слов: " << wordcount << "---\n";
	return 0;
}