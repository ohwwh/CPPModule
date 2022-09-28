#include "Span.hpp"
#include <iostream>
#include <stdio.h>
#include <time.h>

void testmodule(void)
{
    /*Span sp = Span(20000);
    srand(time(0));
    for (int i = 0; i < 20000; i ++)
        sp.addNumber(rand() % 100000);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;*/

    Span sp = Span(20000);
    for (int i = -10000; i < 10000; i ++)
        sp.addNumber(i);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

int main()
{
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

    std::cout << "\n----------\n\n";

    testmodule();

    return 0;
}