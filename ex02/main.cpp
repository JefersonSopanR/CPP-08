#include "MutantStack.hpp"

int test1()
{
	std::cout << "----Using std::list----" << std::endl;
    std::list<int> lst;  // Use std::list
    lst.push_back(5);    // Push elements
    lst.push_back(17);
    std::cout << lst.back() << std::endl;  // Top element (equivalent): 17
    lst.pop_back();                        // Pop the top element
    std::cout << lst.size() << std::endl;  // Size after pop: 1
    
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    std::list<int>::iterator it = lst.begin();  // Get iterators
    std::list<int>::iterator ite = lst.end();
    ++it;  // Increment iterator
    --it;  // Decrement iterator

    while (it != ite)  // Iterate through the list
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::list<int> s(lst);  // Copy std::list
    return 0;
}

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "----Test 1----" << std::endl;
	test1();
	return 0;
}