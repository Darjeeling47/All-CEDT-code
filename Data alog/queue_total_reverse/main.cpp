#include "queue.h"
#include "student.h"
#include <iostream>

int main() {
  CP::queue<int> q;
  int n;
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    int element;
    std::cin >> element;
    q.push(element);
  }
  
  // std::cout << q.front() << " " << q.back() << endl;

  // q.push(1);
  // std::cout << q.front() << " " << q.back() << endl;
  // q.push(2);
  // std::cout << q.front() << " " << q.back() << endl;
  // q.push(3);
  // std::cout << q.front() << " " << q.back() << endl;
  // q.pop();
  // std::cout << q.front() << " " << q.back() << endl;
  // q.reverse();
  // std::cout << q.front() << " " << q.back() << endl;
  // q.push(100);
  // std::cout << q.front() << " " << q.back() << endl;
  // q.reverse();
  // std::cout << q.front() << " " << q.back() << endl;
  // q.push(100);
  // std::cout << q.front() << " " << q.back() << endl;
  // q.push(200);
  // std::cout << q.front() << " " << q.back() << endl;
  // q.push(300);
  // std::cout << q.front() << " " << q.back() << endl;
  // q.push(400);
  // std::cout << q.front() << " " << q.back() << endl;
  // q.push(500);
  // std::cout << q.front() << " " << q.back() << endl;
  // q.pop();
  // std::cout << q.front() << " " << q.back() << endl;
  // q.reverse();
  // std::cout << q.front() << " " << q.back() << endl;
  // q.push(1);
  // std::cout << q.front() << " " << q.back() << endl;
  // q.push(2);
  // std::cout << q.front() << " " << q.back() << endl;
  // q.push(3);
  // std::cout << q.front() << " " << q.back() << endl;
  // q.push(4);
  // std::cout << q.front() << " " << q.back() << endl;
  // q.push(5);
  // std::cout << q.front() << " " << q.back() << endl;
  q.reverse();
  // std::cout << q.front() << " " << q.back() << endl;
  
  while (!q.empty()) {
    std::cout << q.front() << " ";
    // std::cout << q.back() << " ";
    q.pop();
  }
  cout << endl;
  std::cout << std::endl;
}