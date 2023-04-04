//2. Napisz szablon, który sprawdza czy jego parametr posiada typ stowarzyszony value_type, np.: has_value_type<std::vector<int> >::yes powinno mieć wartość true, a has_value_type<int>::yes wartość false.

#include <iostream>
#include <vector>

template <typename T> class has_value_type
{
    typedef char one;
    typedef struct { char a[2]; } two;
    template <typename C> static one test(typename C::value_type*);
    template <typename C> static two test(...);
public:
    enum { yes = sizeof(test<T>(0)) == sizeof(one) };
};

struct X {};

int main()
{
    std::cout << has_value_type<X>::yes << std::endl;
    std::cout << has_value_type<int>::yes << std::endl;
    std::cout << has_value_type<std::vector<int>>::yes << std::endl;
    
}
