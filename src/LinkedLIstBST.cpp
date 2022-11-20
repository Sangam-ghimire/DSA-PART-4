#include "LinkedListBST.h"
#include <iostream>

bool LinkedListBST::isEmpty()
{
    if (root == NULL)
    {
        std::cout << "The LinkedList BST is empty" << std::endl;
        return true;
    }
    std::cout << "The LinkedList Stack is not empty\n";
    return false;
};
void LinkedListBST::add(int key, int value)
{
    Node *newnode = new Node(key, value);

    Node *temp = root;
    Node *lastv = NULL;

    while (temp != NULL)
    {
        if (newnode->key >= temp->key)
        {

            temp = temp->rightchild;
        }
        else
        {
            temp = temp->leftchild;
        }
    }
    if (temp == NULL)
    {
        temp = newnode;
    }
    root = temp;
};

bool LinkedListBST::remove(Node *root, int key)
{
    // BST is empty
    if (root == NULL)
    {
        return false;
    }
    // if key to be deleted is smaller than root's key
    if (key < root->key)
    {
        remove(root->leftchild, key);
    }
    // if key to be deleted is greater than root's key
    else if (key > root->key)
    {
        remove(root->rightchild, key);
    }
    else // target key = root's key
    {
        // no child
        if (root->leftchild == NULL and root->rightchild == NULL)
        {
            // std::cout << "The no child case is called and " << root->value << "is deleted";
            root->value = NULL;
            return true;
        }
        // node with only one child or no child
        else if (root->leftchild == NULL)
        {
            // std::cout << "The rightchild child case is called and " << root->value << "is deleted";
            root->value = root->rightchild->value;
            return true;
        }
        else if (root->rightchild == NULL)
        {
            // std::cout << "The leftchild child case is called and " << root->value << "is deleted";
            root->value = root->leftchild->value;
            return true;
        }
        std::cout << "error";
        return false;
    }
};

bool LinkedListBST::exists(int targetkey)
{
    Node *temp = root;
    while (temp != NULL)
    {
        if (targetkey == temp->key)
        {
            return true;
        }
        else if (targetkey >= temp->key)
        {
            temp = temp->rightchild;
        }
        else
        {
            temp = temp->leftchild;
        }
    };
    return false;
};

void LinkedListBST::inorder()
{
    // MorrisTraversal Method from Geeks For Geeks

    Node *current, *last;

    if (root == NULL)
        return;

    current = root;
    while (current != NULL)
    {

        if (current->leftchild == NULL)
        {
            std::cout << current->value << " ";
            current = current->rightchild;
        }
        else
        {
            /* Find the inorder lastdecessor of current */
            last = current->leftchild;
            while (last->rightchild != NULL && last->rightchild != current)
                last = last->rightchild;

            if (last->rightchild == NULL)
            {
                last->rightchild = current;
                current = current->leftchild;
            }

            else
            {
                last->rightchild = NULL;
                std::cout << current->value << " ";
                current = current->rightchild;
            }
        };