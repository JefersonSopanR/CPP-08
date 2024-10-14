#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main()
{
	std::vector<int> vec;
	std::list<int> list;
	std::deque<int> deque;

	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
		list.push_back(i);
		deque.push_back(i);
	}

	std::cout << "--- Testing easyfind (0)---" << std::endl;
	std::cout << "Vector: ";
	easyfind(vec, 5);

	std::cout << "List: ";
	easyfind(list, 8);

	std::cout << "Deque: ";
	easyfind(deque, 1);
	std::cout << std::endl;
	std::cout << "--- Testing easyfind (1)---" << std::endl;
	std::cout << "Vector: ";
	easyfind(vec, 11);
	std::cout << "List: ";
	easyfind(list, 12);
	std::cout << "Deque: ";
	easyfind(deque, 13);

	return 0;
}
