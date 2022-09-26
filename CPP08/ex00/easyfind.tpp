#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T t, int i){
    typename T::iterator iter = std::find(std::begin(t), std::end(t), i);
    if (iter == std::end(t)){
        throw std::runtime_error("not in the Container!");
    }
    return (iter);
}
