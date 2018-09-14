#include <iostream>
#include <iomanip>
#include<math.h>
#include<ctime>
#include<Windows.h>

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
void print_rus(char *str) {
	cin.getline(str, 100);
	cout << str << endl;
}

// 3.	Написать функцию для подсчёта гласных букв в русском тексте, введённом с клавиатуры.
void vowels(char *str) {
	int vowels = 0;
	char vwl[100] = "аеиоуыюя";

	cout << endl << str << endl << endl;

	for (int i = 0; i < strlen(str); i++)
		for (int j = 0; j < strlen(vwl); j++)
			if (str[i] == vwl[j])
				vowels++;
	cout << "Гласных букв во введенном тексте: " << vowels << endl << endl;
}

// 4.	Дана строка символов. Необходимо проверить является ли эта строка палиндромом
void palindrome(char *str) {
	char* p2 = str;
	while (*p2 != '\0')
	{
		p2++;
	}
	cout << str << endl << endl;

	char *p1 = str;
	p2 = p2 - 1;

	bool f = true;
	while (f)
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
	if (f) cout << "Palindrome" << endl << endl;
	else cout << "Not a palindrome" << endl << endl;
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");

	/*system("chcp 1251");
	system("cls");*/
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/

	int tn = 0;
start:
	cout << "введите номер задания: ";
	cin >> tn; cin.get(); // чтобы он съел разделитель строки

	if (tn == 1)
	{
		char arr[100];
		cin.getline(arr, 100);
		str_tab(arr);
	}
	else if (tn == 2)
	{
		char arr2[100];
		print_rus(arr2);
	}
	else if (tn == 3)
	{
		char str[100] = "кириллица";
		vowels(str);
	}
	else if (tn == 4)
	{
		char str[100] = "аргентина манит негра"; //char str[100] = "снова аргентина манит негра"
		palindrome(str);
	}
	goto start;

	system("pause");
	return 0;
}