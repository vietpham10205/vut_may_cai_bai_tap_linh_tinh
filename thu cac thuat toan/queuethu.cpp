#include <iostream>
#include<vector>
using namespace std;

class Queue {
private:
  vector<int> items;

public:
  void enqueue(int item) {
    items.push_back(item);
  }

  int dequeue() {
    if (items.empty()) {
      throw exception();
    }
    int front = items.front();
    items.erase(items.begin());
    return front;
  }

  int front() {
    if (items.empty()) {
      throw exception();
    }
    return items.front();
  }

  bool empty() {
    return items.empty();
  }
};

int main() {
  Queue queue;

  queue.enqueue(1);
  queue.enqueue(2);
  queue.enqueue(3);

  cout << queue.dequeue() << endl;  // In ra 1
  cout << queue.front() << endl;  // In ra 2
  cout << queue.empty() << endl;  // In ra false

  return 0;
}
