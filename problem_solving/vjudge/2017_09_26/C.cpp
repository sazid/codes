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
    unsigned long long _size;
    unsigned long long head;
    unsigned long long tail;
    unsigned long long items;
  
public:
    s_queue(unsigned long long _size) {
        this-> _size = _size;
        arr = new T[_size];
        head = 0;
        tail = 0;
        items = 0;
    }

    ~s_queue() {
        delete[] arr;
    }

    void clear() {
        head = 0;
        tail = 0;
        items = 0;
    }

    unsigned long long size() {
        return items;
    }

    bool is_empty() {
        return items == 0;
    }

    // returns the item at the head
    T front() {
        if (is_empty()) throw QUEUE_EMPTY_EXCEPTION();
        return arr[head];
    }

    void enqueue(T x) {
        // if queue is full, throw exception
        if (items == _size) throw QUEUE_FULL_EXCEPTION();

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

        // calculate new tail, if it goes beyond queue _size, set it to start (0)
        if (++tail >= _size) {
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

        // calculate new head, if it goes beyond queue _size, set it to start (0)
        if (++head >= _size) {
            head = 0;
        }

        // decrease the number of items
        items--;

        return item;
    }
};

int main() {
    s_queue<int> queue(1000);
    unsigned int n;
    while (true) {
        scanf("%u", &n);
        if (n == 0) break;
        queue.clear();

        for (int i = 1; i <= n; i++) {
            queue.enqueue(i);
        }

        if (queue.size() == 1) {
            printf("Discarded cards:\n");
            printf("Remaining card: 1\n");
        } else {
            printf("Discarded cards: ");
            while (queue.size() > 1) {
                printf("%d", queue.dequeue());
                queue.enqueue(queue.dequeue());

                if (queue.size() > 1) {
                    printf(", ");
                } else if (queue.size() == 1) {
                    printf("\nRemaining card: %d\n", queue.front());
                }
            }
        }
    }

    return 0;
}