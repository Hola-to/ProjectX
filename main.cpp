#include "Header.h"
int main()
{
	setlocale(LC_ALL, "RU");
	unsigned i;
	cout << "�������� ������\n  1 - ����\n  2 - �������\n  3 - ���\n�������� �����: ";
	cin >> i;
	switch (i)
	{
	case 1: main_stack();
		break;
	case 2: main_queue();
		break;
	case 3: main_deque();
		break;
	default: cout << "�������� ����� �� 1 �� 3";
		break;
	}
	return 0;
}