//4. Napisz szablon generujący pierwsze N wyrazów rozwinięcia funkcji sin(x).

#include <iostream>
#include <cmath>

using namespace std;

//silnia
template<int N>
struct factorial
{
    enum { value = N * factorial<N - 1>::value };
};

//rozwiniecie w szereg Taylora funkcji sin(x)
template<int N>
struct sin_taylor
{
    enum { value = sin_taylor<N - 1>::value + pow(-1, N - 1) * pow(2 * N - 1, 2) / factorial<2 * N - 1>::value };
};

int main()
{
    cout << sin_taylor<1>::value << endl;
    cout << sin_taylor<10>::value << endl;
}

