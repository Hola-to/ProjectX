#include <stack>
#include <iostream>
void type_stack(std::stack <double> temp)
{
	while (!temp.empty())
	{
		std::cout << temp.top() << " ";
		temp.pop();
	}
	std::cout << std::endl;
}
