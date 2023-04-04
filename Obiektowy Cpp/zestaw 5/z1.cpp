//1. Zaimplementuj szablon is_class służący do sprawdzania czy dany typ jest klasą.

#include <iostream>
#include <vector>

template <typename T> class is_class
{
    typedef char one;
    typedef struct { char a[2]; } two;
    template <typename C> static one test(int C::*);
    template <typename C> static two test(...);
public:
    enum { yes = sizeof(test<T>(0)) == sizeof(one) };
};

struct X {};


int main()
{
    std::cout << is_class<X>::yes << std::endl;
    std::cout << is_class<int>::yes << std::endl;
    std::cout << is_class<std::vector<int>>::yes << std::endl;
    
}