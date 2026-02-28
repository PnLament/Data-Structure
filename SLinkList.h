#pragma once

#include "List.h"
template <class T>
class sLinkList : public list<T>
{
    private:
        struct node
        {
            node* next;
            T data;
            node(const T &x, node* n = nullptr)
            {
                data = x;
                next = n;
            }
            node() : next(nullptr), data(){};
            ~node(){};
        };
        node* move(int k) const;
        node* head;
        int currentlength;

    public:
        void clear();
        sLinkList();
        ~sLinkList(){clear(); delete head;};
        void insert(int i, const T &x);
        void remove(int i);
        int search(const T &x) const;
        void traverse() const;
        T visit(int i) const;
        int length() const {return currentlength;};



};

#include "SLinkList.tpp"