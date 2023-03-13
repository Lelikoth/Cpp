//Zaimplementuj krótki program w którym wykorzystany będzie polimorfizm dynamiczny oraz polimorfizm statyczny

#include <iostream>

using namespace std;

class A
{
public:
    virtual void f() { cout << "A::f()" << endl; }
};

class B : public A
{
public:
    virtual void f() { cout << "B::f()" << endl; }
};

int main()
{
    A *a = new A();
    B *b = new B();
    a->f();
    b->f();
    a = b;
    a->f();
    return 0;
}