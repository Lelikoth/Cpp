//Zaimplementować szablon klasy Stack  wraz  z jej  specjalizacjami  tak  aby „działała” 
//ze zwykłymi tablicami oraz kontenerami STL:
//Stack<int,100> s_default;
//Stack<int,0,std::vector<int>> s_container;

#include <iostream>
#include <vector>

using namespace std;


template<typename T, int N = 100, typename R = T*> class Stack
{
    R _rep;
    unsigned int _top;
public:
    Stack() : _top(0) {};
    void push(T t)
    {
        if (_top < N)
            _rep[_top++] = t;
    }
    T pop()
    {
        if (_top > 0)
            return _rep[--_top];
        return T();
    }
};

template<typename T,int N> class Stack<T,N,T*> 
{
    T _rep[N];
    unsigned int _top;
public:
    Stack() : _top(0) {};
    void push(T t)
    {
        if (_top < N)
            _rep[_top++] = t;
    }
    T pop()
    {
        if (_top > 0)
            return _rep[--_top];
        return T();
    }
};

template<typename T,int N,template<typename E> class Sequence> class Stack<T,N,Sequence<T> > 
{
    Sequence<T> _rep;
public:
    void push(T e)
    {
        _rep.push_back(e);
    };
    T pop() 
    {
        T top = _rep.top();
        _rep.pop_back();
        return top;
    }
    bool is_empty()
    {
        return _rep.empty();
    }
    
};

int main()
{
    Stack<int,100> s_default;
    Stack<int,0,vector<int>> s_container;

    s_default.push(1);
    s_default.push(2);
    s_default.push(3);
    s_container.push(1);
    s_container.push(2);
    s_container.push(3);

    cout << s_default.pop() << endl;
    cout << s_default.pop() << endl;
    cout << s_default.pop() << endl;
    cout << s_container.pop() << endl;
    cout << s_container.pop() << endl;
    cout << s_container.pop() << endl;

    return 0;
}



