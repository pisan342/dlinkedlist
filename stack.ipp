#include "stack.h"

template <class T> Stack<T>::Stack() = default;
template <class T> T Stack<T>::top() const { return _list.front(); }
template <class T> bool Stack<T>::empty() const { return _list.empty(); }
template <class T> int Stack<T>::size() const { return _list.size(); }
template <class T> void Stack<T>::push(T data) { _list.push_front(data); }
template <class T> void Stack<T>::pop() { _list.pop_front(); }