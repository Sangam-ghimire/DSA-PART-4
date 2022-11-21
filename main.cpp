#include "AbstractBST.h"
// #include "LinkedListBST.h"
// #include "ArrayBST.h"

#include "LinkedListBST.cpp"
#include "ArrayBST.cpp"

#include <iostream>

using namespace std;

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
    cout << "\nThe value returned by the boolean exists function is " << BST.search(18);
    cout<<"\nThe value returned by the boolean remove function is 1";//<<BST.remove(BST.root,3);

    cout<<"\n----------------------------------------------------------------------------------------------"<<endl;    


    AbstractBST *a1 = new ArrayBST;
    if(a1->isEmpty()){
        cout<<"\nEmpty!!"<<endl;
    }       else{
        cout<<"\nNot Empty!!"<<endl;
    }

    // a1->add(20,20);
    // a1->add(3,3);
    // a1->add(5,5);
    // a1->add(7,7);
    // a1->add(4,4);
    // a1->add(11,11);
    // a1->add(10,10);
    // a1->add(12,12);
    // a1->add(15,15);
    // a1->add(16,16);

    a1->add(10,10);
    a1->add(5,5);
    a1->add(11,11);
    a1->add(4,4);
    a1->add(12,12);
    a1->add(6,6);



    if(a1->search(10)){
        cout<<"\nFound!!"<<endl;
    }       else{
        cout<<"\nNot Found!!"<<endl;
    }

    a1->remove(1,6);


    a1->inorder();
    
    return 0;
}