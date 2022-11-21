#ifndef ArrayBST_h
#define ArrayBST_h

#include "AbstractBST.h"

class ArrayBST : public AbstractBST{

    public:

    Node* arr[10];

    ArrayBST();
    ~ArrayBST();

    bool isEmpty();
    void add(int key, int subtree);
    bool remove(int subtree , int key);
    bool  search(int targetkey);
    Node* largest(int subtree );
    void inorder();

};


#endif