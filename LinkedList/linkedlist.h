#ifndef LINKEDLIST_H
#define LINKEDLIST_H

using namespace std;
#include <vector>

template <typename T>

class Node
{
public:
    T data;
    Node<T> *next;

    Node(T data1, Node<T> *next1)
    {
        data = data1;
        next = next1;
    }

    Node(T data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node<int> *arr2ll(vector<int> &arr);
void printll(Node<int> *head);
int lengthll(Node<int> *head);
bool keypresent(Node<int> *head, int key);
Node<int> *removehead(Node<int> *head);
Node<int> *removetail(Node<int> *head);
Node<int> *removekthelement(Node<int> *head, int k);
Node<int> *removeelement(Node<int> *head, int elelment);
Node<int> *inserthead(Node<int> *head, int element);
Node<int> *inserttail(Node<int> *head, int element);
Node<int> *insertkthelement(Node<int> *head, int k, int element);
#endif