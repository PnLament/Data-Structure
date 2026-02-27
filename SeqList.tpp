#include "SeqList.h"

template <class T>
void seqList<T> :: clear()
{
    currentlength = 0;
}
template<class T>
seqList<T> :: ~seqList()
{
    delete [] data;
}
template<class T>
T seqList<T> :: visit(int i) const
{
    return data[i];
}
template<class T>
int seqList<T> :: length() const
{
    return currentlength;

}
template<class T>
void seqList<T> :: traverse() const
{
    for (int i = 0; i < currentlength; ++i)
        cout << data[i] << " ";
    cout << endl;
}
template<class T>
seqList<T> :: seqList(int initsize)
{
    data = new T [initsize];
    maxsize = initsize;
    currentlength = 0;
}
template<class T>
int seqList<T> :: search(T &x) const
{
    for (int i = 0; i < currentlength; ++i)
    {
        if (data[i] == x) return i;
    }
    return -1;
}
template<class T>
void seqList<T> :: doublespace()
{
    T *tmp = data;
    maxsize *= 2;
    data = new T [maxsize];
    for (int i = 0; i < currentlength; ++i) data[i] = tmp[i];
    delete [] tmp;
}
template<class T>
void seqList<T> :: insert(int i, const T &x) 
{
    if (currentlength == maxsize) doublespace();
    for (int j = currentlength; j > i; --j) data[j] = data[j - 1];
    data[i] = x;
    ++currentlength;
}
template <class T> 
void seqList<T> :: remove(int i)
{
    for (int j = i; j < currentlength - 1; ++j) data[j] = data[j + 1];
    --currentlength;
}
