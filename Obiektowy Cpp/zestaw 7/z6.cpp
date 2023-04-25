//6. Rozszerz powyższy szablon tak, aby również typ elementów wektora był parametrem szablonu: template<size_t N, typename T> T dot(T *x, T *y);

#include <iostream>
using namespace std;


//iloczyn skalarny dwu wektorów o typie T
template<size_t N, typename T> T dot(T *x, T *y)
{
    T sum = 0;
    for (size_t i = 0; i < N; i++)
        sum += x[i] * y[i];
    return sum;
}

int main()
{
    double x[3] = { 1.1, 2.2, 3.3 };
    double y[3] = { 4.4, 5.5, 6.6 };
    cout << dot<3, double>(x, y) << endl;
    int x2[3] = { 1, 2, 3 };
    int y2[3] = { 4, 5, 6 };
    cout << dot<3, int>(x2, y2) << endl;
}