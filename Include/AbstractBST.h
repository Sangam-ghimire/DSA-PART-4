#pragma once
#include <cstdlib>

class Node
{
public:
    int value;        // data to be stored
    int key;          // to store data in uniue key
    Node *rightchild; // to point to right child
    Node *leftchild;  // to point to left child

    Node() {}
    Node(int d, int e) : key(d), value(e), rightchild(NULL), leftchild(NULL){};
    ~Node() {} // default deconstructor
};

class AbstractBST
{
public:
    AbstractBST() {}
    ~AbstractBST() {}

    virtual bool isEmpty() = 0;
    virtual void add(int key, int value) = 0;
    virtual bool remove(Node *root, int key) = 0;
    virtual bool exists(int targetkey) = 0;
    virtual void inorder() = 0;
};
