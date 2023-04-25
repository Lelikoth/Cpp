//2. Zaimplementuj szablon Pow<N,M> obliczający N^M.


#include <iostream>
using namespace std;

template <int N, int M>
struct Pow
{
    enum { value = Pow<N, M / 2>::value * Pow<N, M / 2>::value * Pow<N, M % 2>::value };
};

template <int N>
struct Pow<N, 1>
{
    enum { value = N };
};

template <int N>
struct Pow<N, 0>
{
    enum { value = 1 };
};


int main()
{
    cout << Pow<2, 3>::value << endl;
}
