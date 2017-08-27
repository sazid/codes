#include <iostream>
#include <exception>
using namespace std;

class QUEUE_FULL_EXCEPTION : public exception {
  const char * what() const throw() {
    return "Queue is full\n";
  }
};

class QUEUE_EMPTY_EXCEPTION : public exception {
  const char * what() const throw() {
    return "Queue is empty\n";
  }
};


template <class T>
class s_queue {
  T *arr;
  unsigned long long size;
  unsigned long long head;
  unsigned long long tail;
  unsigned long long items;
  
public:
  s_queue(unsigned long long size) {
    this-> size = size;
    arr = new T[size];
    head = 0;
    tail = 0;
    items = 0;
  }
  
  ~s_queue() {
    delete[] arr;
  }
  
  bool is_empty() {
    return items == 0;
  }
  
  void enqueue(T x) {
    // if queue is full, throw exception
    if (items == size) throw QUEUE_FULL_EXCEPTION();
    
    // when the queue is empty, set head to 0, tail to 1
    // and insert the new item
    if (is_empty()) {
      arr[0] = x;
      head = 0;
      tail = 1;
      items++;
      return;
    }
    
    // insert the item at current tail (tail is always empty)
    arr[tail] = x;

    // calculate new tail, if it goes beyond queue size, set it to start (0)
    if (++tail >= size) {
      tail = 0;
    }

    // increase the number of items
    items++;
  }
  
  T dequeue() {
    // if queue is empty, throw exception
    if (is_empty()) throw QUEUE_EMPTY_EXCEPTION();
    
    // hold the current element at 'head', this will be returned
    T item = arr[head];
    
    // calculate new head, if it goes beyond queue size, set it to start (0)
    if (++head >= size) {
      head = 0;
    }
    
    // decrease the number of items
    items--;
    
    return item;
  }
};

int main() {
  s_queue<int> queue(5);
  queue.enqueue(1);
  queue.enqueue(2);
  queue.enqueue(3);
  queue.enqueue(4);
  queue.enqueue(5);
  cout << queue.dequeue() << endl;
  cout << queue.dequeue() << endl;
  cout << queue.dequeue() << endl;
  cout << queue.dequeue() << endl;
  cout << queue.dequeue() << endl;
  
  s_queue<string> string_queue(5);
  string_queue.enqueue("hello!");
  cout << string_queue.dequeue() << endl;

  return 0;
}