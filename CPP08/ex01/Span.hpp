#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <algorithm>
#include <numeric>

class Span {
    std::vector<int> v;
    public:
        Span();
        Span(const Span& s);
        Span& operator=(const Span& s);
        ~Span();

        class containerFullException : public std::exception {
			public:
				const char* what(void) const throw();
		};

         class noSpanException : public std::exception {
			public:
				const char* what(void) const throw();
		};

        Span(unsigned int n);
        void addNumber(int value);
        int shortestSpan();
        int longestSpan();
        
};

#endif