#include "Span.hpp"

Span::Span(unsigned int maxSize) : _maxSize(maxSize) {}

void Span::addNumber(int number)
{
    if(number > INT_MAX || number < INT_MIN)
        throw OutOffLimits();
    if (_numbers.size() >= _maxSize)
        throw Fullexception();

    _numbers.push_back(number);
}

int Span::shortestSpan() const
{
    if (_numbers.size() <= 1)
        throw std::runtime_error("Cannot find span, not enough numbers stored.");

    std::vector<int> sortedNumbers = _numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int shortest = sortedNumbers[1] - sortedNumbers[0];
    for (size_t i = 2; i < sortedNumbers.size(); i++)
    {
        int span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < shortest)
            shortest = span;
    }

    return shortest;
}

int Span::longestSpan() const
{
    if (_numbers.size() <= 1)
        throw std::runtime_error("Cannot find span, not enough numbers stored.");

    int min = _numbers[0];
    int max = _numbers[0];

    for (std::vector<int>::const_iterator it = _numbers.begin(); it != _numbers.end(); ++it)
    {
        if (*it < min)
            min = *it;
        if (*it > max)
            max = *it;
    }

    return max - min;
}