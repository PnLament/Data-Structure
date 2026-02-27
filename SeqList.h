#include "List.h"
template <class T>
class seqList : public list <T>
{
    private:
        T *data;
        int currentlength;
        int maxsize;
        void doublespace();
    public:
        seqList(int initsize = 100);
        ~seqList();
        void clear();
        int length() const;
        void insert(int i, const T &x);
        T visit(int i) const;
        void remove();
        int search(const T &x) const;
        void traverse() const;
};
#include "SeqList.tpp"
