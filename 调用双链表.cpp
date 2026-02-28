#include "DLinkList.h"
#include "iostream"
using namespace std;

int main()
{
    dLinkList<int> tmp;
    for (int i = 0; i < 10; ++i) {
        tmp.insert(i, i);
    }
    tmp.traverse();
    tmp.remove(5);
    tmp.traverse();

    cout << "Element at index 3: " << tmp.visit(3) << endl;

    return 0;
}
