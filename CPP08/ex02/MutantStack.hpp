#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>

template <typename T, typename _container=std::deque<T>>
class MutantStack {
    _container c;
    public:
        MutantStack();
        MutantStack(const MutantStack& m);
        MutantStack& operator=(const MutantStack& m);
        ~MutantStack();

        // 멤버 함수들
        
};

#endif