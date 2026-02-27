#pragma once
/// @brief 顺序表
/// @tparam T 元素类型
template <class T>
class list
{
    public:
        virtual void clear() = 0; // 清空顺序表
        list(){};
        virtual ~list(){};
        virtual int length() const = 0;
        virtual void insert(int i, const T &x) = 0;
        virtual void remove(int i) = 0;
        virtual int search(const T &x) const = 0;
        virtual T visit(int i) const = 0;
        virtual void traverse() const = 0;

};
