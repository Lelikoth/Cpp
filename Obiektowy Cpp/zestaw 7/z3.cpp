//3. Wymyśl i zaimplementuj jako metaprogram szybszy algorytm funkcji pow(x).

#include<iostream>
#include <time.h>
using namespace std;


template <int N, int M>
struct pow_int
{
    enum { value = pow_int<N, M / 2>::value * pow_int<N, M / 2>::value * pow_int<N, M % 2>::value };
};

template <int N>
struct pow_int<N, 0>
{
    enum { value = 1 };
};

template <int N>
struct pow_int<N, 1>
{
    enum { value = N };
};

template<int N> inline double pow(double x) {return x*pow<N-1>(x);}
template<>      inline double pow<0>(double x) {return 1.0;}

int main()
{
    clock_t start, stop;
    start = clock();
    cout << pow_int<2, 3>::value << endl;
    stop = clock();
    cout << "Czas wykonania: " << (double)(stop - start) / CLOCKS_PER_SEC << endl;
    start = clock();
    cout << pow<3>(2) << endl;
    stop = clock();
    cout << "Czas wykonania: " << (double)(stop - start) / CLOCKS_PER_SEC << endl;
}
