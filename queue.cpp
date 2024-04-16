#include <queue>
#include <iostream>
void type_queue(std::queue <double> temp)
{
	while (!temp.empty())
	{
		std::cout << temp.front() << " ";
		temp.pop();
	}
	std::cout << std::endl;
}