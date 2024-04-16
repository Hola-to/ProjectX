#include "Header.h"
void main_deque()
{
	deque <double> first_deque;
	srand(time(0));
	size_t size = rand() % 10 + 2;
	double elem = rand() % 50 - 4;
	while (size)
	{
		elem += rand() % 7;
		first_deque.push_front(elem);
		size--;
	}
	cout << "Первая последовательность: ";
	type_deque(first_deque);
	deque <double> second_deque;
	size = rand() % 10 + 2;
	elem = rand() % 50 - 4;
	while (size)
	{
		elem += rand() % 8;
		second_deque.push_front(elem);
		size--;
	}
	cout << "Вторая последовательность: ";
	type_deque(second_deque);
	deque <double> new_deque, temp1 = first_deque, temp2 = second_deque;
	while (!first_deque.empty() || !second_deque.empty()) {
		if (first_deque.empty()) {
			new_deque.push_front(second_deque.front());
			second_deque.pop_front();
		}
		else if (second_deque.empty()) {
			new_deque.push_front(first_deque.front());
			first_deque.pop_front();
		}
		else {
			if (first_deque.front() > second_deque.front()) {
				new_deque.push_front(first_deque.front());
				first_deque.pop_front();
			}
			else {
				new_deque.push_front(second_deque.front());
				second_deque.pop_front();
			}
		}
	}
	cout << "Новая последовательность: ";
	type_deque(new_deque);
}