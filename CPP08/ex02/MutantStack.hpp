#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>

template <typename T>
class MutantStack {
    std::stack<T> stack;
    public:
        MutantStack();
        MutantStack(const MutantStack& m);
        MutantStack& operator=(const MutantStack& m);
        ~MutantStack();

        // 멤버 함수들
        
};

#endif