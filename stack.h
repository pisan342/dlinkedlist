#ifndef STACK_H
#define STACK_H

#include "linkedlist.h"

template <class T> class Stack {
private:
  LinkedList<T> _list;

public:
  Stack();
  T top() const;
  bool empty() const;
  int size() const;
  void push(T data);
  void pop();
};

#include "stack.ipp"

#endif