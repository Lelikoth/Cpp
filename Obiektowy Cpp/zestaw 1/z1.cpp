//Zaimplementuj szablon funkcji  maksimum() , wybierającej większy z dwóch argumentów. Argumenty są jednakowego typu i  posiadają operator< 

#include <iostream>

template <typename T>

T maksimum(T a, T b) {
    return (a < b) ? b : a;
}


int main() {

    std::cout << maksimum(1, 2) << std::endl;
    std::cout << maksimum(2.14, 1.14) << std::endl;
    std::cout << maksimum('a', 'b') << std::endl;
    std::cout << maksimum("ala", "ola") << std::endl;

    return 0;
}