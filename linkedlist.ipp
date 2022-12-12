#include <cassert>
#include <iostream>

using namespace std;

template <class T>
Node<T>::Node(T data) : data{data}, next{nullptr}, prev{nullptr} {}

template <class T> ostream &operator<<(ostream &out, const LinkedList<T> &lst) {
  out << "[";
  if (lst.head != nullptr) {
    out << lst.head->data;
    auto *curr = lst.head->next;
    while (curr != nullptr) {
      out << ", " << curr->data;
      curr = curr->next;
    }
  }
  return out << "]";
}

template <class T>
LinkedList<T>::LinkedList() : head{nullptr}, tail{nullptr}, _size{0} {}

template <class T> LinkedList<T>::~LinkedList() {
  auto *curr = head;
  while (curr != nullptr) {
    auto *todelete = curr;
    curr = curr->next;
    delete todelete;
  }
}

template <class T> bool LinkedList<T>::empty() const { return _size == 0; }

template <class T> int LinkedList<T>::size() const { return _size; }

template <class T> void LinkedList<T>::push_front(T data) {
  ++_size;
  auto *newNode = new Node<T>(data);
  if (head == nullptr) {
    head = tail = newNode;
    return;
  }
  head->prev = newNode;
  newNode->next = head;
  head = newNode;
}

template <class T> void LinkedList<T>::push_back(T data) {
  ++_size;
  auto *newNode = new Node<T>(data);
  if (tail == nullptr) {
    head = tail = newNode;
    return;
  }
  tail->next = newNode;
  newNode->prev = tail;
  tail = newNode;
}

// larger items go to front
template <class T> void LinkedList<T>::push_sorted(T data) {
  ++_size;
  auto *newNode = new Node<T>(data);
  if (head == nullptr) {
    head = tail = newNode;
    return;
  }
  // insert front
  if (data >= head->data) {
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return;
  }
  // insert end
  if (data <= tail->data) {
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
    return;
  }
  Node<T> *curr = head;
  while (data < curr->data) {
    curr = curr->next;
  }
  newNode->next = curr;
  newNode->prev = curr->prev;
  newNode->prev->next = newNode;
  newNode->next->prev = newNode;
}

template <class T> T LinkedList<T>::front() const {
  assert(head != nullptr);
  return head->data;
}
template <class T> T LinkedList<T>::back() const {
  assert(tail != nullptr);
  return tail->data;
}
template <class T> void LinkedList<T>::pop_front() {
  assert(head != nullptr);
  --_size;
  auto *todelete = head;
  if (head == tail) {
    head = tail = nullptr;
    delete todelete;
    return;
  }
  head = head->next;
  head->prev = nullptr;
  delete todelete;
}

template <class T> void LinkedList<T>::pop_back() {
  assert(tail != nullptr);
  --_size;
  auto *todelete = tail;
  if (head == tail) {
    head = tail = nullptr;
    delete todelete;
    return;
  }
  tail = tail->prev;
  tail->next = nullptr;
  delete todelete;
}