#include <iostream>
#include <stdexcept>
using namespace std;

template<class T>
dLinkList<T>::dLinkList()
{
    currentlength = 0;
    head = new node;
    tail = new node;
    head->nxt = tail;
    tail->pre = head;
}

template<class T>
typename dLinkList<T>::node* dLinkList<T>::move(int i) const
{
    node *p = head;

    while (i-- >= 0)
    {
        p = p->nxt;
    }
    return p;
}
template<class T>
void dLinkList<T>::insert(int i, const T&x)
{
    if (i < 0 || i > currentlength)
    {
        throw std::out_of_range("insert: index out of range");
    }

    node *prev = move(i - 1);
    node *curr = move(i);
    node *tmp = new node(prev, curr, x);
    prev->nxt = tmp;
    curr->pre = tmp;
    ++currentlength;
}
template<class T>
void dLinkList<T>::remove(int i)
{
    if (i < 0 || i >= currentlength)
    {
        throw std::out_of_range("remove: index out of range");
    }

    node *curr = move(i);
    curr->pre->nxt = curr->nxt;
    curr->nxt->pre = curr->pre;
    delete curr;
    --currentlength;
}

template<class T>
T dLinkList<T>::visit(int i) const
{
    if (i < 0 || i >= currentlength)
    {
        throw std::out_of_range("visit: index out of range");
    }

    node* p = move(i);
    return p->data;
}
template<class T>
void dLinkList<T>::clear()
{
    node *p = head->nxt;
    while (p != tail)
    {
        node *next = p->nxt;
        p->pre->nxt = p->nxt;
        p->nxt->pre = p->pre;
        node *del = p;
        delete del;
        p = next;
    }
    currentlength = 0;
}

template<class T>
int dLinkList<T>::search(const T&x) const
{
    node *p = head->nxt;
    int i = 0;
    while (p != tail)
    {
        if (p->data == x)
        {
            return i;
        }
        ++i;
        p = p->nxt;
    }
    return -1;
}

template<class T>
void dLinkList<T>::traverse() const
{
    node *p = head->nxt;
    while (p != tail)
    {
        cout << p->data << " ";
        p = p->nxt;
    }
    cout << endl;

}
