#include "priority_queue.h"

template <class T> Priority_Queue<T>::Priority_Queue() = default;
template <class T> T Priority_Queue<T>::top() const { return _list.front(); }
template <class T> bool Priority_Queue<T>::empty() const {
  return _list.empty();
}
template <class T> int Priority_Queue<T>::size() const { return _list.size(); }
template <class T> void Priority_Queue<T>::push(T data) {
  _list.push_sorted(data);
}
template <class T> void Priority_Queue<T>::pop() { _list.pop_front(); }