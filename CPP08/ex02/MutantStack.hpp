#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>

template <typename T, typename _container=std::deque<T>>
class MutantStack {
    public:
        typedef typename _container::value_type		    value_type;
        typedef typename _container::size_type		    size_type;
        typedef	         _container			            container_type;
    private:
        _container c;
    public:
        MutantStack();
        MutantStack(const MutantStack& m);
        MutantStack& operator=(const MutantStack& m);
        ~MutantStack();

        // 멤버 함수들
        MutantStack()
};

#endif