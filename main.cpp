#include "queue.h"
#include "stack.h"
#include <cassert>
#include <iostream>

using namespace std;

void testQ() {
  Queue q;
  assert(q.empty());
  q.push(10);
  assert(q.size() == 1);
  assert(q.front() == 10);
  q.push(20);
  q.push(30);
  assert(q.back() == 30);
  q.pop();
  assert(q.front() == 20);
  cout << "Passed queue tests" << endl;
}

void testS() {
  Stack s;
  assert(s.empty());
  s.push(10);
  assert(s.size() == 1);
  assert(s.top() == 10);
  s.push(20);
  s.push(30);
  assert(s.top() == 30);
  s.pop();
  assert(s.top() == 20);
  cout << "Passed stack tests" << endl;
}

int main() {
  testQ();
  testS();
  cout << "Done." << endl;
  return 0;
}