#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>

class Span {
    std::vector<int> v;
    public:
        Span();
        Span(const Span& s);
        Span& operator=(const Span& s);
        ~Span();

        Span(unsigned int n);
        void addNumber();
        int shortestSpan();
        int longestSpan();
};

#endif