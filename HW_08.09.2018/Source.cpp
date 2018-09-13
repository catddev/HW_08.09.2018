#include <iostream>
#include <iomanip>
#include<math.h>
#include<ctime>
#include<cstring>
#include<Windows.h>
#include<string.h>
#include<stdio.h>
#include<string>

using namespace std;

// 1.	Дана строка символов. Заменить в ней все пробелы на табуляции.

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
void print_rus(char*str) {
	
}

// 3.	Написать функцию для подсчёта гласных букв в русском тексте, введённом с клавиатуры.


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/
	
	int tn = 0;
start:
	cout << "Введите номер задания: ";
	cin >> tn;

	if (tn == 1)
	{
		char arr[100];
		cin.getline(arr, 100);
		str_tab(arr);
	}
	else if (tn == 2)
	{
		char arr2[100];
		/*print_rus(arr2);*/
		cin>>arr2;
		cout << arr2 << endl;
	}
	else if (tn == 3)
	{
		int vowels = 0, i, j;
		char vwl[100] = "аеиоуыюя";
		char str[100] = "кириллица";
		cout << endl << str << endl << endl;

		for (i = 0; i < strlen(str); i++)
			for (j = 0; j < strlen(vwl); j++)
				if (str[i] == vwl[j])
					vowels++;
		cout << "Гласных букв во введенном тексте: " << vowels << endl << endl;
	}
	else if (tn == 4) // 4.	Дана строка символов. Необходимо проверить является ли эта строка палиндромом
	{
		char str[100] = "аргентина манит негра"; //char str[100] = "снова аргентина манит негра"
		char* p2 = str;
		while (*p2 != '\0')
		{
			p2++;
		}
		cout << str << endl << endl;

		char *p1 = str;
		p2 = p2-1;
	
		bool f = true;
		while(f)
		{
			if (*p1 == ' ')
			{
				p1++;
				continue;
			}
			if (*p2 == ' ')
			{
				p2--;
				continue;
			}
			if (*p1 != *p2) f = false;
			if (p1 == p2) break;
			p1++;
			p2--;
		}
		if (f) cout << "Pallindrom" << endl << endl;
		else cout << "Not a pallindrom" << endl << endl;
	}
	goto start;
	
	system("pause");
	return 0;
}