#include "queue.h"
#include "stack.h"
#include <cassert>
#include <iostream>

using namespace std;

void testQ() {
  Queue aqueue;
  assert(aqueue.empty());
  aqueue.push(10);
  assert(aqueue.size() == 1);
  assert(aqueue.front() == 10);
  aqueue.push(20);
  aqueue.push(30);
  assert(aqueue.back() == 30);
  aqueue.pop();
  assert(aqueue.front() == 20);
  cout << "Passed queue tests" << endl;
}

void testS() {
  Stack astack;
  assert(astack.empty());
  astack.push(10);
  assert(astack.size() == 1);
  assert(astack.top() == 10);
  astack.push(20);
  astack.push(30);
  assert(astack.top() == 30);
  astack.pop();
  assert(astack.top() == 20);
  cout << "Passed stack tests" << endl;
}

int main() {
  testQ();
  testS();
  cout << "Done." << endl;
  return 0;
}