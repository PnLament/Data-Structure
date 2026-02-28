#include "List.h"
template<class T>
class dLinkList : public list<T>
{
    private:
        struct node
        {
            node* pre;
            node* nxt;
            T data;
            node():pre(nullptr), nxt(nullptr),data(){}
            node(node* p, node* n, const T&x){pre = p; nxt = n; data = x;}
            ~node() = default;

        };
        node* move(int i) const;//获取第i个节点的地址node*
        int currentlength;
        node *head, *tail;
    public:
        void clear();
        int search(const T&x) const;
        T visit(int i) const;
        void insert(int i, const T&x);
        void remove(int i);
        void traverse() const;
        int length() const {return currentlength;}
        dLinkList();
        ~dLinkList(){clear(); delete head; delete tail;}

};

#include "DLinkList.tpp"