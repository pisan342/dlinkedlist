#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include "linkedlist.h"

class Priority_Queue {
private:
  LinkedList _list;

public:
  Priority_Queue();
  int top() const;
  bool empty() const;
  int size() const;
  void push(int data);
  void pop();
};
#endif