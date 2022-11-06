#pragma once

class AbstractBST
{
public:
    AbstractBST(/* args */);
    ~AbstractBST();
    virtual bool isEmpty()=0;
    virtual void add(int key, int value);
    virtual bool remove();
    virtual bool  exists(int targetkey)=0;
};



