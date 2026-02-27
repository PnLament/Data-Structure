#include<iostream>
#include"SeqList.h"
using namespace std;

int main()
{
    seqList<int> tmp(20);
    for (int i = 0; i < 20; ++i) tmp.insert(i, i);
    cout << tmp.visit(0);
    cout << endl;
    cout << tmp.search(2) << endl;
    tmp.traverse();
    return 0;
}