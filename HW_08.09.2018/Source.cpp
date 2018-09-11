#include <iostream>
#include <iomanip>
#include<math.h>
#include<ctime>
#include<cstring>

using namespace std;

// 1.	Дана строка символов.Заменить в ней все пробелы на табуляции.

void str_tab(char* str) {
	char* p = str;
	while (*p != '\0')
	{
		if (*p == ' ') *p = '\t';
		p++;
	}
	cout << str << endl;
}

// 2.	Создать функцию для вывода русского текста в окно консоли.



// 3.	Написать функцию для подсчёта гласных букв в русском тексте, введённом с клавиатуры.



// 4.	Дана строка символов.Необходимо проверить  является ли эта строка палиндромом



int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	
	// 1
	char arr[100];
	cin.getline(arr, 100);
	str_tab(arr);
		




	system("pause");
	return 0;
}