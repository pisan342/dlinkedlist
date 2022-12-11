#include "priority_queue.h"

Priority_Queue::Priority_Queue() = default;
int Priority_Queue::top() const { return _list.front(); }
bool Priority_Queue::empty() const { return _list.empty(); }
int Priority_Queue::size() const { return _list.size(); }
void Priority_Queue::push(int data) { _list.push_sorted(data); }
void Priority_Queue::pop() { _list.pop_front(); }