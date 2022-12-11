#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node *prev;
  explicit Node(int data = 0);
};

class LinkedList {
  friend ostream &operator<<(ostream &out, const LinkedList &lst);

private:
  Node *head;
  Node *tail;
  int _size;

public:
  LinkedList();
  ~LinkedList();
  bool empty() const;
  int size() const;
  void push_front(int data);
  void push_back(int data);
  void push_sorted(int data);
  int front() const;
  int back() const;
  void pop_front();
  void pop_back();
};

#endif