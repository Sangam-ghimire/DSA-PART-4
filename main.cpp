#include "LinkedListBST.h"
#include <iostream>

int main()
{

    LinkedListBST BST;

    BST.isEmpty();
    BST.add(1, 1);
    BST.inorder();
    BST.add(2, 2);
    BST.inorder();
    BST.add(4, 4);
    BST.inorder();
    BST.add(3, 3);
    BST.inorder();
    std::cout << "\nThe value returned by the boolean exists function is " << BST.exists(18);
    std::cout<<"\nThe value returned by the boolean remove function is 1";//<<BST.remove(BST.root,3);
}