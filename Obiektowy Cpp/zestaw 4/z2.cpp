//Rozwiązać za pomocą klas cech również problem inicjalizacji zmiennej total

#include <iostream>

using namespace std;

template <typename T>
struct sum_traits;

template <>
struct sum_traits<char> {
    typedef string sum_type;
	static sum_type zero() { return ""; }
};

template <>
struct sum_traits<int> {
    typedef int sum_type;
	static sum_type zero() { return 0; }
};

template <>
struct sum_traits<float> {
    typedef float sum_type;
	static sum_type zero() { return 0.0; }
};

template <>
struct sum_traits<double> {
    typedef double sum_type;
	static sum_type zero() { return 0.0; }
};

template<typename T>
typename sum_traits<T>::sum_type sum(T* begin, T* end) {
    typename sum_traits<T>::sum_type total = sum_traits<T>::zero();
    while (begin != end) {
        total += *begin;
        ++begin;
    }
    return total;
}

int main() {
    char arr1[] = "abcd";
    cout << sum(arr1, arr1 + 4) << endl;
    
    int arr2[] = { 1, 2, 3, 4 };
    cout << sum(arr2, arr2 + 4) << endl;
    
    float arr3[] = { 1.0, 2.0, 3.0, 4.0 };
    cout << sum(arr3, arr3 + 4) << endl;
    
    double arr4[] = { 1.1, 2.2, 3.3, 4.4 };
    cout << sum(arr4, arr4 + 4) << endl;
    
    return 0;
}