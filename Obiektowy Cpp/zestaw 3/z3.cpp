//W  przeciwieństwie  do  szablonów  funkcji,  szablony  klas  nie  mogą  być przeciążane, a jedynie specjalizowane. 
//Oznacza to, że w programie może istnieć  tylko  jeden  szablon  podstawowy  o  danej  nazwie.  
//Proszę zaimplementować specjalizację częściową, która jest dozwolona  tylko  dla szablonów klas, 
//dla podanych podzbiorów parametrów:
//
//Stack<T,666>
//Stack<T*,N>
//Stack<double ,N>
//Stack<int *,N>
//Stack<double,666>
//Stack<double *,44>


#include<iostream>


using namespace std;


template<typename T,int N> class Stack
{
public:
  Stack() 
  {
    cout<<"T,N"<<endl;
  };
};

template<typename T> class Stack<T,666>
{
public:
  Stack()
  {
    cout<<"T,666"<<endl;
  };
}; 

template<typename T,int N> class Stack<T*,N>
{
public:
  Stack() 
  {
    cout<<"T*,N"<<endl;
  };
};

template<int N> class Stack<double ,N>
{
public:
  Stack() 
  {
    cout<<"double,N"<<endl;
  };
};

template<int N> class Stack<int *,N>
{
public:
  Stack() 
  {
    cout<<"int *,N"<<endl;
  };
};

template<>class Stack<double,666>
{
public:
  Stack() 
  {
    cout<<"double,666"<<endl;
  };
};

template<>class Stack<double *,44>
{
public:
  Stack() 
  {
    cout<<"double *,44"<<endl;
  };
};

int main()
{

  Stack<int,20>      s0;
  Stack<int,666>     s1;
  Stack<double *,30> s2;
  Stack<double ,30>  s3;
  Stack<double *,44> s4;
  Stack<int *,20>    s5;
  Stack<double,666>  s6;  

  return 0;
}