#ifndef STACK_H
#define STACK_H

#include "linkedlist.h"

class Stack {
private:
  LinkedList _list;

public:
  Stack();
  int top() const;
  bool empty() const;
  int size() const;
  void push(int data);
  void pop();
};
#endif