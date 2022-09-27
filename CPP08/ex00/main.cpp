#include "easyfind.hpp"

int main (void){
    std::vector<int> v;
    for (int i = 0 ; i < 10 ; ++i) {
        v.push_back(i);
    }
    try{
        std::vector<int>::iterator iter = easyfind(v, 7);
        std::cout << *iter << std::endl;
        std::cout << *(iter + 1) << std::endl;
    }
    catch (std::exception& e){ std::cout << e.what() << std::endl; }
}