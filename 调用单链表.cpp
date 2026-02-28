#include "SLinkList.h"
#include <iostream>
using namespace std;

int main()
{
    sLinkList<int> tmp;

    // for (int i = 0; i < 5; ++i)
    // {
    //     tmp.insert(i, i+1);
    // }
    // tmp.traverse();
    // cout << tmp.visit(4) << endl;
    // cout << tmp.search(5) << endl;
    // //tmp.remove(0);
    // cout << tmp.search(2) << endl;
    tmp.insert(0,1);
    tmp.insert(1,3);
    tmp.insert(2,5);
    tmp.insert(3,7);
    tmp.insert(4,2);
    tmp.insert(5,3);
    tmp.erase(1);
    tmp.traverse();
}

