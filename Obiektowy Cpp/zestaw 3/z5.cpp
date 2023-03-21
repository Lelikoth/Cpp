//Zapoznaj  się  z  rodziną  funktorów  porównujących,  do  której  należą  np. less<>(),   greater<>(),   less_equal<>(),   greater_equal<>().
//Przypomnij sobie pojemnik std::set. Następnie napisz programik korzystający ze zbioru liczb posortowanego odwrotnie (czyli malejąco).

//less<>() - porównuje czy pierwszy argument jest mniejszy od drugiego
//greater<>() - porównuje czy pierwszy argument jest większy od drugiego
//less_equal<>() - porównuje czy pierwszy argument jest mniejszy lub równy drugiemu
//greater_equal<>() - porównuje czy pierwszy argument jest większy lub równy drugiemu

//set - pojemnik, który przechowuje elementy w posortowanej kolejności

#include <iostream>
#include <set>
#include <functional>

using namespace std;

int main()
{
    set<int, greater<int>> set;
    set.insert(1);
    set.insert(2);
    set.insert(3);
    set.insert(4);
    set.insert(5);
    set.insert(6);
    set.insert(7);
    set.insert(8);
    set.insert(9);
    set.insert(10);
    for (auto i : set)
        cout << i << " ";
    cout << endl;
}