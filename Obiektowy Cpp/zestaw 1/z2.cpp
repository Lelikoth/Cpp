//Argumenty szablonu mogą być wydedukowane z argumentów funkcji. Zaimplementuj funkcję convert, której zadaniem jest zmiana typu podanego argumentu funkcji

#include <iostream>

template <typename U, typename T>

U convert(T a) {
    return static_cast<U>(a);
}

int main() {

    std::cout << convert<double>(1) << std::endl;
    std::cout << convert<int>(1.0) << std::endl;
    std::cout << convert<int>('a') << std::endl;
    std::cout << convert<char>(97) << std::endl;

    return 0;
}