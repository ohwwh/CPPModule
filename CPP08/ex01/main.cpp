#include "Span.hpp"
#include <list>
#include <stdio.h>
#include <time.h>

void testmodule0(void) {
    Span sp = Span(5);
    try {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception& e) { std::cout << e.what() << std::endl; }
    sp.addNumber(6);
    try {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception& e) { std::cout << e.what() << std::endl; }
    sp.addNumber(3);
    try {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception& e) { std::cout << e.what() << std::endl; }
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    try {
        sp.addNumber(14);
    }
    catch (std::exception& e) { std::cout << e.what() << std::endl; }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void testmodule1(void) {
    Span sp = Span(20000);
    for (int i = -10000; i < 10000; i ++)
        sp.addNumber(i);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void testmodule2(void) {
    std::list<char> c(7, 'c');
    Span sp(7);
    try {
        sp.addNumber(c.begin(), c.end());
        sp.showSpan();
    }
    catch (std::exception& e) { std::cout << e.what() << std::endl; }
}

int main()
{
    std::cout << "\n----test0----\n\n";
    testmodule0();
    std::cout << "\n----test1----\n\n";
    testmodule1();
    std::cout << "\n----test2----\n\n";
    testmodule2();
    std::cout << "\n-------------\n\n";

    return 0;
}