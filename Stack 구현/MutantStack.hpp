#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <deque>

template <typename T, typename _container=std::deque<T> >
class MutantStack {
    public:
        typedef typename _container::value_type		    value_type;
        typedef typename _container::size_type		    size_type;
        typedef typename _container::iterator           iterator;
        typedef	         _container			            container_type;
    private:
        container_type c;
    public:
        MutantStack();
        MutantStack(const MutantStack& m);
        MutantStack& operator=(const MutantStack& m);
        ~MutantStack();

        // 멤버 함수들
        MutantStack(const container_type& c);
        bool empty(void) const;
        size_t size() const;
        T& top(); 
        const T& top() const;
        void push(const T& a);
        template <class... Args> void emplace (Args&&... args);
        void pop();
        iterator begin(void);
        iterator end(void);
};
#include "MutantStack.tpp"
#endif