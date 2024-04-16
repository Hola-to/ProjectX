#include "Header.h"
int main()
{
	setlocale(LC_ALL, "RU");
	unsigned i;
	cout << "Выберите способ\n  1 - Стек\n  2 - Очередь\n  3 - Дек\nВыберите число: ";
	cin >> i;
	switch (i)
	{
	case 1: main_stack();
		break;
	default: cout << "Выберите число от 1 до 3";
		break;
	}
	return 0;
}