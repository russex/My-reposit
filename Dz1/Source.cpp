#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int program;
	int n;
	int k = 1;
	int a;
	int b;
	int i;
	cout << "¬ведите номер программы: "; cin >> program;
	switch (program)
	{
	case 1:
		cout << "¬ведите число дл€ вычислени€ интеграла: \n"; cin >> n;
		for ( i = 1; i <= n; i++)
		{
			k *= i;
		}
		cout << k << endl; 
	break;

	case 2:
		cout << "¬ведите число : \n"; cin >> a;
		cout << "¬ведите степень : \n"; cin >> n;
		for ( i = 1; i < n; i++)
		{
			a *= a;
		}
		cout << a << endl; 
	break;
	case 3:
		char abc;
	
		for (int i = 0; i < 256; i++)
		{
			abc = (char)i;
			cout << abc << "\t";
		}
	
	break;
	default:cout << "ƒл€ запуска проверить домащнее задание перезапусите программу"; break;
	}

	
	
}