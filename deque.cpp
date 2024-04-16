#include <deque>
#include <iostream>
void type_deque(std::deque <double> temp)
{
	while (!temp.empty())
	{
		std::cout << temp.front() << " ";
		temp.pop_front();
	}
	std::cout << std::endl;
}