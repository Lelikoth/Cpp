//5. Napisz szablon generujący funkcję implementującą iloczyn skalarny dwu wektorów. template<size_t N> double inner(double *x, double *y);

#include <iostream>
using namespace std;

//iloczyn skalarny dwu wektorów
template<size_t N> double inner(double *x, double *y)
{
    double sum = 0;
    for (size_t i = 0; i < N; i++)
        sum += x[i] * y[i];
    return sum;
}

int main()
{
    double x[3] = { 1, 2, 3 };
    double y[3] = { 4, 5, 6 };
    cout << inner<3>(x, y) << endl;
}
