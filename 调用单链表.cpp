#include "SLinkList.h"
#include <iostream>
using namespace std;

int main()
{
    sLinkList<int> tmp;

    for (int i = 0; i < 5; ++i)
    {
        tmp.insert(i, i+1);
    }
    tmp.traverse();
    cout << tmp.visit(4) << endl;
    cout << tmp.search(5) << endl;
    tmp.remove(0);
    cout << tmp.search(2) << endl;
}

