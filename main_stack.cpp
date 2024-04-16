#include "Header.h"
void main_stack()
{
	stack <double> first_stack;
	srand(time(0));
	size_t size = rand() % 10 + 2;
	double elem = rand() % 50 - 4;
	while (size)
	{
		elem += rand() % 7;
		first_stack.push(elem);
		size--;
	}
	cout << "Первая последовательность: ";
	type_stack(first_stack);
	stack <double> second_stack;
	size = rand() % 10 + 2;
	elem = rand() % 50 - 4;
	while (size)
	{
		elem += rand() % 8;
		second_stack.push(elem);
		size--;
	}
	cout << "Вторая последовательность: ";
	type_stack(second_stack);
	stack <double> new_stack, temp1 = first_stack, temp2 = second_stack;
	while (!first_stack.empty() || !second_stack.empty()) {
		if (first_stack.empty()) {
			new_stack.push(second_stack.top());
			second_stack.pop();
		}
		else if (second_stack.empty()) {
			new_stack.push(first_stack.top());
			first_stack.pop();
		}
		else {
			if (first_stack.top() > second_stack.top()) {
				new_stack.push(first_stack.top());
				first_stack.pop();
			}
			else {
				new_stack.push(second_stack.top());
				second_stack.pop();
			}
		}
	}
	cout << "Новая последовательность: ";
	type_stack(new_stack);
}