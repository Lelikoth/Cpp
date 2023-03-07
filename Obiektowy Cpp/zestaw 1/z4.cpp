//Szablony parametrów szablonu umożliwiają przekazanie nazwy szablonu jako argumentu szablonu funkcji. 
//Podaj prosty przykład jak można dedukować wartości pozatypowych argumentów szablonu (void f(C<K>))

#include <iostream>

template < template <int N> class C, int K>

void f(C<K>) {
    std::cout << K << std::endl;
}

template <int N> class A {};

int main() {

    A<2> a;

    f(a);

    return 0;
}