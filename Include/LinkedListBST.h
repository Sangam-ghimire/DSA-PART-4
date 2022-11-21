#pragma once
#include "AbstractBST.h"
#include <cstdlib>

// class Node
// {
// public:
//     int value;        // data to be stored
//     int key;          // to store data in uniue key
//     Node *rightchild; // to point to right child
//     Node *leftchild;  // to point to left child

//     Node() {}
//     Node(int d, int e) : key(d), value(e), rightchild(NULL), leftchild(NULL){};
//     ~Node() {} // default deconstructor
// };

class LinkedListBST : public AbstractBST
{
public:
    LinkedListBST(){};
    ~LinkedListBST(){};
    Node *root = NULL;

    bool isEmpty();
    void add(int key, int value);
    bool remove(Node *root, int key);
    bool remove(int subtree, int key);
    bool search(int targetkey);
    void inorder();
};