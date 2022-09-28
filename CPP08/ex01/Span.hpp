#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>

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
        void showSpan();

        template <typename T>
        void addNumber(T i1, T i2){
            if (std::distance(i1, i2) > static_cast<int>(v.capacity() - v.size()))
                throw containerFullException();
            v.insert(v.end(), i1, i2);
        }
};

#endif