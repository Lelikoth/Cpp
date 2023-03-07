//Wykład przedstawia prosty stos jako przykład pojemnika. Korzystając z typu stowarzyszonego (typedef T value_type)
//zaimplementuj szablon funkcji sumującej wszystkie elementy stosu

#include <iostream>

template <typename T, size_t N> class Stack {
    T data[N];
    size_t size;
public:
    typedef T value_type;

    Stack() : size(0) {}
    void push(T const &t) {
        data[size++] = t;
    }
    T pop() {
        return data[--size];
    }
    bool empty() const {
        return size == 0;
    }
};

template <typename S> typename S::value_type sum(S &s) {
    typename S::value_type result = 0;
    while (!s.empty()) {
        result += s.pop();
    }
    return result;
}

int main() {

    Stack<int, 3> s;
    s.push(1);
    s.push(2);
    s.push(3);

    std::cout << sum(s) << std::endl;

    return 0;
}