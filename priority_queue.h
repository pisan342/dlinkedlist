#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include "linkedlist.h"

template <class T> class Priority_Queue {
private:
  LinkedList<T> _list;

public:
  Priority_Queue();
  T top() const;
  bool empty() const;
  int size() const;
  void push(T data);
  void pop();
};

#include "priority_queue.ipp"

#endif