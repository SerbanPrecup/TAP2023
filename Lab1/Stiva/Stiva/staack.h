#pragma once
#ifndef STAACK_H
#define STAACK_H


class Staack
{
public:
    virtual void push(int)=0;
    virtual int pop()=0;
    virtual int peek()=0;
    virtual bool isEmpty()=0;
    virtual bool isFull()=0;
    virtual void print()=0;
    Staack();
};

class Array_Stack: public Staack{
private:
    int* vector;
    int top;
    int max;
public:
    Array_Stack(int max=100);
    Array_Stack(const Array_Stack&);
    ~Array_Stack();
    virtual void push(int);
    virtual int pop();
    virtual int peek();
    virtual bool isEmpty();
    virtual bool isFull();
    virtual void print();
};
#endif // STAACK_H
