#ifndef SPAN_HPP
#define SPAN_HPP

class Span {
    int *container;
    unsigned int size;
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