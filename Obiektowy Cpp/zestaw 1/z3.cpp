//Wykorzystując pozatypowe parametry szablonów przedstaw sposób implementacji iloczynu (dot_product) skalarnego dwóch wektorów o wymiarze N

#include <iostream>

template <size_t N, typename T>

T dot_product(T (&a)[N], T (&b)[N]) {
    T result = 0;
    for (size_t i = 0; i < N; i++) {
        result += a[i] * b[i];
    }
    return result;
}

int main() {

    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};

    std::cout << dot_product(a, b) << std::endl;

    return 0;
}

