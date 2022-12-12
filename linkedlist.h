#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

using namespace std;

template <class T> class Node {
public:
  T data;
  Node *next;
  Node *prev;
  Node(T data);
};

template <class T> class LinkedList {
  template <class K>
  friend ostream &operator<<(ostream &out, const LinkedList<K> &lst);

private:
  Node<T> *head;
  Node<T> *tail;
  int _size;

public:
  LinkedList();
  ~LinkedList();
  bool empty() const;
  int size() const;
  void push_front(T data);
  void push_back(T data);
  void push_sorted(T data);
  T front() const;
  T back() const;
  void pop_front();
  void pop_back();
};

#include "linkedlist.ipp"

#endif