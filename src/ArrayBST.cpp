#include "AbstractBST.h"
#include "ArrayBST.h"

#include <iostream>

using namespace std;

ArrayBST::ArrayBST(){
    int i=1;
    while(i<10)
    {
        arr[i] = new Node();
        arr[i]->key = -1;
        i++;
    }
}

ArrayBST::~ArrayBST(){}

bool ArrayBST :: isEmpty(){

    if(arr[1]->key == -1){
        return true;
    }       else{
        return false;
    }

}

Node* ArrayBST :: largest(int subtree){

    Node* temp = arr[subtree];

    if(temp->rightchild == NULL){
        return temp;
    }

    Node* biggest;

    biggest = largest((2*subtree)+1);

    return biggest;

}

void ArrayBST :: add(int key , int value){


    for(int i=1 ; i<10 ; ){

        if(arr[i]->key == -1){

            arr[i]->key = key;
            break;

        }       else if (arr[i]->key > key){

                    i = 2*i;

        }       else {

                    i = (2*i) + 1;

        }


    }
}


bool ArrayBST :: remove(int subtree , int key){

    if(isEmpty()){
        cout<<"\nTree is Empty!!"<<endl;
    }

    for(int i=1 ; i<10 ;){

        cout<<"\n"<<arr[i]->key<<endl;

        Node* biggest;

        int left,right;

        left = 2*i;
        right = left + 1;

        if(arr[i]->key == key){

            if(arr[i] -> leftchild ->key == -1 && arr[i]->rightchild->key == -1){
                    
                    arr[i]->key == -1;
                    return true;
                    break;
            }

            else if(arr[left] == NULL){

                arr[i] = arr[right];
                return true;
                break;

            }

            else if(arr[right] == NULL){

                arr[i] = arr[left];
                return true;
                break;
            }
            break;

        }  
            else if(arr[i]->key > key){

            i = left;

            // if(arr[i]->key == -1){
            //     break;
            // }

        }   else if(arr[i]->key < key){

            i=right;
            // if(arr[i]->key == -1){
            //     break;
            // }

        }   else{

            biggest = largest(left);
            arr[i] = biggest;

            remove(left,biggest->key);



        }

    }

    return false;

}

bool ArrayBST :: search(int targetKey){

    Node* temp;

    temp = arr[1];

    while(temp != NULL){
        if(temp->key == targetKey){

            return true;

        }       
        else if(temp->key > targetKey){
 
            temp = temp->leftchild;
            if(temp->leftchild == NULL){

                break;
                
            }

        }       else{

            temp = temp->rightchild;

            if(temp->rightchild == NULL){
                break;
            }

        }
    }

    return false;

}

void ArrayBST :: inorder(){

    for(int i=1 ; i<10 ; i++){

        if(arr[i] == NULL){

            
            cout<<"\nThe End!!"<<endl;

        }  else{

            cout<<"\nValue: "<<arr[i]->key<<endl;

        }

    }

}







