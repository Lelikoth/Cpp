//Zaimplementuj szablon funkcji accumulate, której pierwszy i drugi argument są iteratorami dowolnego kontenera STL. 
//Funkcja ma za zadanie wyliczać sumę wszystkich elementów w przedziale podanych iteratorów

#include <iostream>
#include <vector>

using namespace std;

template <class InputIterator, class T>
T accumulate(InputIterator first, InputIterator last, T init)
{
    while (first != last)
    {
        init = init + *first;
        ++first;
    }
    return init;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout << accumulate(v.begin(), v.end(), 0) << endl;
    return 0;
}
