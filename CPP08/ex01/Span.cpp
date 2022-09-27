#include "Span.hpp"

Span::Span(){
    container = 0;
    size = 0;
}

Span::Span(const Span& s){
    container = 0;
    size = 0;
    *this = s;
}

Span& Span::operator=(const Span& s){
    if (&s == this)
        return (*this);
    if (size) {
        delete [] container;
        container = 0;
    }
    size  = s.size;
    if (!size)
        container = 0;
    else {
        container = new int[size];
        for (unsigned int i = 0; i < size; i ++)
			container[i] = s.container[i];
    }
    return (*this);
}

Span::~Span(){
    
}

Span::Span(unsigned int n){
    size = n;
    if (!n)
        container = 0;
    else
        container = new int[n];
}

void Span::addNumber(){
    
}

int Span::shortestSpan(){
    
}

int Span::longestSpan(){
    
}
