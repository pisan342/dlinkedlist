#ifndef QUEUE_H
#define QUEUE_H

#include "linkedlist.h"

template <class T> class Queue {
private:
  LinkedList<T> _list;

public:
  Queue();
  T front() const;
  T back() const;
  bool empty() const;
  int size() const;
  void push(T data);
  void pop();
};

#include "queue.ipp"

#endif