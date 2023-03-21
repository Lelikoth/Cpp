//Podaj implementacje funkcji maxdla różnego typu argumentów. Skorzystaj z możliwości przeciążania i specjalizacji szablonów funkcji:
//max(T a, T b)
//max(T *a, T *b)
//max(T *data,size_t n)
//max(char *a,char *a)
//max(const char *a,const char *a)
//max(char *a,const char *a)

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

template <typename T> T max(T a, T b)
{
    return a > b ? a : b;
}

template <typename T> T max(T *a, T *b)
{
    return *a > *b ? *a : *b;
}

template <typename T> T max(T *data, size_t n)
{
    T max = data[0];
    for (size_t i = 1; i < n; i++)
    {
        if (data[i] > max)
            max = data[i];
    }
    return max;
}

template <> char *max(char *a, char *b)
{
    return strcmp(a, b) > 0 ? a : b;
}

template <> const char *max(const char *a, const char *b)
{
    return strcmp(a, b) > 0 ? a : b;
}

template<typename T> const T* max(T *a,const T*b) {
  return (*a)>(*b)?a:b;
}


int main()
{
    int i=0;
    int j=5;

    cout<<::max(i,j)<<endl;
    cout<<::max(&i,&j)<<endl;

    int tab[5]={1,2,3,4,5};
    cout<<::max(tab,5)<<endl;

    
    char *p1 = new char[5];
    char *p2 = new char[5];
    
    strncpy(p1,"ania",5);
    strncpy(p2,"asia",5);
    
    cout<<::max("asia","ania")<<endl;
    cout<<::max(p1,p2)<<endl;

    const char *p3 = "ania";
    const char *p4 = "asia";
    cout<<::max(p3,p4)<<endl;
    cout<<::max(p1, p3)<<endl;

    return 0;
}