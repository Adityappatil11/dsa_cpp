#ifndef DOUBRELINKEDLIST_H
#define DOUBRELINKEDLIST_H

using namespace std;
#include <vector>

template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node<T> *prev;

    Node(T data1, Node<T> *next1, Node<T> *prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(T data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node<int> *arr2dll(vector<int> &arr);

#endif // DOUBRELINKEDLIST_H