#include "Span.hpp"

Span::Span() : _n(0), _v(std::vector<int>()) {}

Span::Span(unsigned int n) : _n(n), _v(std::vector<int>()) {}

Span::Span(Span const &other) : _n(other._n), _v(other._v) {}

Span &Span::operator=(Span const &other)
{
	_n = other._n;
	_v = other._v;
	return *this;
}

Span::~Span() {}

void Span::addNumber(int n)
{
	if (_v.size() == _n)
		throw std::out_of_range("Container is full, cannot add more numbers");
	_v.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_v.size() + std::distance(begin, end) > _n)
		throw std::out_of_range("Container cannot accommodate the given range of numbers");
	_v.insert(_v.end(), begin, end);
}

int Span::shortestSpan()
{
	if (_v.size() < 2)
		throw std::out_of_range("Not enough elements to calculate the shortest span");
	std::vector<int> v = _v;
	std::sort(v.begin(), v.end());
	int min = v[1] - v[0];
	for (std::vector<int>::size_type i = 2; i < v.size(); i++)
	{
		if (v[i] - v[i - 1] < min)
			min = v[i] - v[i - 1];
	}
	return min;
}

int Span::longestSpan()
{
	if (_v.size() < 2)
		throw std::out_of_range("Not enough elements to calculate the longest span");
	std::vector<int> v = _v;
	std::sort(v.begin(), v.end());
	return v[v.size() - 1] - v[0];
}
