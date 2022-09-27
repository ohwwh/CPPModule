#include "Span.hpp"

Span::Span(){}

Span::Span(const Span& s){
    *this = s;
}

Span& Span::operator=(const Span& s){
    v = s.v;
    return (*this);
}

Span::~Span(){
    
}

Span::Span(unsigned int n) : v(n){}

void Span::addNumber(){
    
}

int Span::shortestSpan(){
    
}

int Span::longestSpan(){
    
}
