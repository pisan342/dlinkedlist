#include "queue.h"

Queue::Queue() = default;
int Queue::front() const { return _list.front(); }
int Queue::back() const { return _list.back(); }
bool Queue::empty() const { return _list.empty(); }
int Queue::size() const { return _list.size(); }
void Queue::push(int data) { _list.push_back(data); }
void Queue::pop() { _list.pop_front(); }