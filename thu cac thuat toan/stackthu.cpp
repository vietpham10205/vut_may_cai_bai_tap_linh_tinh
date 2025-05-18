#include <iostream>
#include<vector>
using namespace std;

class Stack {
private:
  vector<int> items;

public:
  void push(int item) {
    items.push_back(item);
  }

  int pop() {
    if (items.empty()) {
      throw exception();
    }
    int top = items.back();
    items.pop_back();
    return top;
  }

  int top() {
    if (items.empty()) {
      throw exception();
    }
    return items.back();
  }

  bool empty() {
    return items.empty();
  }
};

int main() {
  Stack stack;

  stack.push(1);
  stack.push(2);
  stack.push(3);

  cout << stack.pop() << endl;  // In ra 3
  cout << stack.top() << endl;
  cout << stack.pop() << endl;
  cout << stack.pop() << endl;  // In ra 2
  cout << stack.empty() << endl;  // In ra false

  return 0;
}
