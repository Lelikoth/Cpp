//Zaimplementuj klasę (funktor typu generator) SeqenceGen przy wykorzystaniu której wypełnij, za pomocą algorytmu generate_n, wektor sekwencją 20 pierwszych nieparzystych liczb całkowitych. Znajdź element większy od 4 przy wykorzystaniu adaptera bind oraz algorytmu find_if


#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

class SequenceGen
{
public:
    SequenceGen(int start = 1) : m_start(start) {}
    int operator()()
    {
        int result = m_start;
        m_start += 2;
        return result;
    }
private:
    int m_start;
};

int main()
{
    vector<int> v(20);
    generate_n(v.begin(), 20, SequenceGen());
    vector<int>::iterator it = find_if(v.begin(), v.end(), bind(greater<int>(), placeholders::_1, 4));
    cout << *it << endl;
    return 0;
}