﻿#include <iostream>
#include "Set.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Максимальный размер множества равен 5" << endl;
	try
	{
		Set a(2);
		a[0] = 1;
		a[1] = 2;
		cout << "Множество a = ";
		cout << a << endl;
		int idx;
		cout << "Введите размер множества b:";
		cin >> idx;
		Set b(idx);
		cin >> b;
		cout << "Размер множества a: " << a() << endl;
		cout << "Размер множества b: " << b() << endl;
		cout << "Множество b = ";
		cout << b << endl;
		cout << "b++: ";
		cout << b++ << endl;
		cout << "a + b = " << a + b << endl;
	}
	catch (int num)
	{
		cout << "Ошибка с кодом: " << num << endl;
		cout << "1 - размер множества недопустим, выбранный размер множества либо больше максимально допустимого, либо меньше 0" << endl << "2 - выбранный индекс недопустим" << endl << "3 - добавление элемента невозможно, размер множества больше максимально допустимого размера" << endl << "4 - в результате объединения множеств размер превысил максимально допустимый размер множества";
	}
	return 0;
}