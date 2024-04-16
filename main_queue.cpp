#include "Header.h"
void main_queue()
{
	queue <double> first_queue;
	srand(time(0));
	size_t size = rand() % 10 + 2;
	double elem = rand() % 50 - 4;
	while (size)
	{
		elem += rand() % 7;
		first_queue.push(elem);
		size--;
	}
	cout << "Первая последовательность: ";
	type_queue(first_queue);
	queue <double> second_queue;
	size = rand() % 10 + 2;
	elem = rand() % 50 - 4;
	while (size)
	{
		elem += rand() % 8;
		second_queue.push(elem);
		size--;
	}
	cout << "Вторая последовательность: ";
	type_queue(second_queue);
	queue <double> new_queue, temp1 = first_queue, temp2 = second_queue;
	while (!first_queue.empty() || !second_queue.empty()) {
		if (first_queue.empty()) {
			new_queue.push(second_queue.front());
			second_queue.pop();
		}
		else if (second_queue.empty()) {
			new_queue.push(first_queue.front());
			first_queue.pop();
		}
		else {
			if (first_queue.front() < second_queue.front()) {
				new_queue.push(first_queue.front());
				first_queue.pop();
			}
			else {
				new_queue.push(second_queue.front());
				second_queue.pop();
			}
		}
	}
	cout << "Новая последовательность: ";
	type_queue(new_queue);
}