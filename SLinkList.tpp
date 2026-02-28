#include <iostream>
#include <stdexcept>

template <class T>
typename sLinkList<T>::node* sLinkList<T>::move(int k) const //主要要用typename/template区分！
{
    node* p = head;
    while (k-- >= 0) {
        p = p->next;
    }
    return p;
}

template <class T>
sLinkList<T>::sLinkList()
{
    head = new node;
    currentlength = 0;
}

template <class T>
void sLinkList<T>::clear()
{
    node* p = head->next;
    head->next = nullptr;
    while (p != nullptr) {
        node* next = p->next;
        delete p;
        p = next;
    }
    currentlength = 0;
}

template <class T>
void sLinkList<T>::insert(int i, const T& x)
{
    if (i < 0 || i > currentlength) {
        throw std::out_of_range("insert: index out of range");
    }

    node* pos = move(i - 1);
    pos->next = new node(x, pos->next);
    ++currentlength;
}

template <class T>
void sLinkList<T>::remove(int i)
{
    if (i < 0 || i >= currentlength) {
        throw std::out_of_range("remove: index out of range");
    }

    node* pos = move(i - 1);//注意node *a, *b而不是node*a, b;!!!!
    node* del = pos->next;
    pos->next = del->next;
    delete del;
    --currentlength;
}

template <class T>
int sLinkList<T>::search(const T& x) const
{
    node* p = head->next;
    int cnt = 0;

    while (p != nullptr && p->data != x) {
        p = p->next;
        ++cnt;
    }

    if (p == nullptr) {
        return -1;
    }
    return cnt;
}

template <class T>
T sLinkList<T>::visit(int i) const
{
    if (i < 0 || i >= currentlength) {
        throw std::out_of_range("visit: index out of range");
    }

    node* p = move(i);
    return p->data;
}

template <class T>
void sLinkList<T>::traverse() const
{
    node* p = head->next;
    while (p != nullptr) {
        std::cout << p->data << " ";
        p = p->next;
    }
    std::cout << std::endl;
}
