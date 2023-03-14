//Zaimplementuj krótki program w którym wykorzystany będzie polimorfizm dynamiczny oraz polimorfizm statyczny

#include <iostream>

using namespace std;

class A
{
private:
    string x = "A::f()";
public:
    virtual void f() { cout << x << endl; }

    A& operator=(const A& a)
    {
        x = a.x;
        return *this;
    }
};

class B : public A
{
private:
    string x = "B::f()";
public:
    void f() override { cout << x << endl; }

};

int main()
{
    A *a = new A();
    B *b = new B();
    a->f();
    b->f();
    b = (B*)a;
    b->f();
    return 0;
}