#include "Span.hpp"

int	subjectTest()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}

void finalTest()
{
    std::cout << "----Final test----" << std::endl;
    Span sp = Span(1);
    
    try
    {
        sp.addNumber(1);
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}


int main()
{
	Span sp1 = Span(10);
	std::cout << "Adding 10 numbers" << std::endl;
	sp1.addNumber(1);
	sp1.addNumber(42);
	sp1.addNumber(84);
	sp1.addNumber(168);
	sp1.addNumber(336);
	sp1.addNumber(672);
	sp1.addNumber(1344);
	sp1.addNumber(2688);
	sp1.addNumber(5376);
	sp1.addNumber(10752);
	std::cout << "Shortest span: " << sp1.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp1.longestSpan() << std::endl;
	try
	{
		sp1.addNumber(1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Adding 10 000 numbers" << std::endl;
	std::cout << std::endl;
	Span sp2 = Span(10000);
	std::vector<int> v(10000, 0);
	for (std::vector<int>::size_type i = 0; i < v.size(); i++)
		v[i] = i;
	sp2.addNumber(v.begin(), v.end());
	std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
	try
	{
		sp2.addNumber(1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "----Subject test----" << std::endl;
	subjectTest();
	finalTest();
	return 0;
}