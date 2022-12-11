#include "linkedlist.h"

#include <cassert>
#include <iostream>

using namespace std;

Node::Node(int data) : data{data}, next{nullptr}, prev{nullptr} {}

ostream &operator<<(ostream &out, const LinkedList &lst) {
  out << "[";
  if (lst.head != nullptr) {
    out << lst.head->data;
    Node *curr = lst.head->next;
    while (curr != nullptr) {
      out << ", " << curr->data;
      curr = curr->next;
    }
  }
  return out << "]";
}

LinkedList::LinkedList() : head{nullptr}, tail{nullptr}, _size{0} {}

LinkedList::~LinkedList() {
  Node *curr = head;
  while (curr != nullptr) {
    Node *todelete = curr;
    curr = curr->next;
    delete todelete;
  }
}

bool LinkedList::empty() const { return _size == 0; }
int LinkedList::size() const { return _size; }

void LinkedList::push_front(int data) {
  ++_size;
  Node *newNode = new Node(data);
  if (head == nullptr) {
    head = tail = newNode;
    return;
  }
  head->prev = newNode;
  newNode->next = head;
  head = newNode;
}

void LinkedList::push_back(int data) {
  ++_size;
  Node *newNode = new Node(data);
  if (tail == nullptr) {
    head = tail = newNode;
    return;
  }
  tail->next = newNode;
  newNode->prev = tail;
  tail = newNode;
}
int LinkedList::front() const {
  assert(head != nullptr);
  return head->data;
}
int LinkedList::back() const {
  assert(tail != nullptr);
  return tail->data;
}
void LinkedList::pop_front() {
  assert(head != nullptr);
  --_size;
  Node *todelete = head;
  if (head == tail) {
    head = tail = nullptr;
    delete todelete;
    return;
  }
  head = head->next;
  head->prev = nullptr;
  delete todelete;
}

void LinkedList::pop_back() {
  assert(tail != nullptr);
  --_size;
  Node *todelete = tail;
  if (head == tail) {
    head = tail = nullptr;
    delete todelete;
    return;
  }
  tail = tail->prev;
  tail->next = nullptr;
  delete todelete;
}