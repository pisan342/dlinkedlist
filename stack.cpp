#include "stack.h"

Stack::Stack() = default;
int Stack::top() const { return _list.front(); }
bool Stack::empty() const { return _list.empty(); }
int Stack::size() const { return _list.size(); }
void Stack::push(int data) { _list.push_front(data); }
void Stack::pop() { _list.pop_front(); }