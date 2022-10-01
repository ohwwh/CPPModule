#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>

template <typename T, typename _container=std::deque<T> >
class MutantStack : public std::stack<T, _container>{
    public:  
        typedef typename _container::iterator                   iterator;
        typedef typename _container::reverse_iterator           reverse_iterator;
        typedef typename _container::const_iterator             const_iterator;
        typedef typename _container::const_reverse_iterator     const_reverse_iterator;
    public:
        MutantStack();
        MutantStack(const MutantStack& m);
        MutantStack& operator=(const MutantStack& m);
        ~MutantStack();

        MutantStack(const _container& c);
        iterator begin(void);
        iterator end(void);
        reverse_iterator rbegin(void);
        reverse_iterator rend(void);
        const_iterator cbegin(void);
        const_iterator cend(void);
        const_reverse_iterator crbegin(void);
        const_reverse_iterator crend(void);
};

#include "MutantStack.tpp"
#endif