//1. Napisz szablon funkcji lub klasy wyliczający funkcję silnia.

#include <iostream>
using namespace std;

template <typename T>
T silnia(T n)
{
    if (n == 0)
        return 1;
    else
        return n * silnia(n - 1);
}

int main()
{
    cout << silnia(5) << endl;
}