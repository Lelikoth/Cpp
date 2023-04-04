//3. Zaimplementuj szablon klasy Is_convertible za pomocą którego możliwe jest stwierdzenie czy jeden z typów można rzutować na drugi.

#include <iostream>
#include <vector>

template <typename T, typename U> class Is_convertible
{
    typedef char one;
    typedef struct { char a[2]; } two;
    template <typename C> static one test(U);
    template <typename C> static two test(...);
    static T makeT();
public:
    enum { yes = sizeof(test<T>(0)) == sizeof(one), same_type = false }; 
};

template <typename T> class Is_convertible<T, T>
{
public:
    enum { same_type = true, yes = true };
};


struct X {};

int main()
{
    std::cout << Is_convertible<X, X>::yes << std::endl;
    std::cout << Is_convertible<X, X>::same_type << std::endl;

    std::cout << Is_convertible<X, int>::yes << std::endl;
    std::cout << Is_convertible<X, int>::same_type << std::endl;

    std::cout << Is_convertible<int, X>::yes << std::endl;
    std::cout << Is_convertible<int, X>::same_type << std::endl;
    
    std::cout << Is_convertible<int, int>::yes << std::endl;
    std::cout << Is_convertible<int, int>::same_type << std::endl;
    
    std::cout << Is_convertible<int, double>::yes << std::endl;
    std::cout << Is_convertible<int, double>::same_type << std::endl;
    
    std::cout << Is_convertible<double, int>::yes << std::endl;
    std::cout << Is_convertible<double, int>::same_type << std::endl;
}
