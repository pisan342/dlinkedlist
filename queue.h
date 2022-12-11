#ifndef QUEUE_H
#define QUEUE_H

#include "linkedlist.h"

class Queue {
private:
  LinkedList _list;

public:
  Queue();
  int front() const;
  int back() const;
  bool empty() const;
  int size() const;
  void push(int data);
  void pop();
};
#endif