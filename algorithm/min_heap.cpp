#include <iostream>
#include <algorithm>

using namespace std;

const int NN = 100; // heap size

struct heap {
    int myarray[NN+1];
    int n; // no. of nodes in myarray

    heap() {
        clear();
    }

    void clear() {
        n = 0;
    }

    void insert( int k ) {
        if (n == NN) {
            printf("Cannot insert anymore element, the heap is full\n");
            return;
        }

        ++n; // since the heap is 1 based indexed, we increment first

        myarray[n] = k;
        int p = n;

        while (p > 1) { // p = 1 means we have only one element, its already a heap
            int pr = p / 2;
            if (myarray[pr] > myarray[p]) {
                swap(myarray[pr], myarray[p]);
                p = pr;
            }
            else break;
        }
    }

    int remove() { // first element in the heap is the minimum
        if (n == 0) {
            printf("The heap is empty, cannot delete\n");
            return -1;
        }

        int k = myarray[1];
        int p = 1;
        myarray[1] = myarray[n];
        n--;

        while (2*p <= n) {
            int ch = 2*p;
            if (ch+1 <= n && myarray[ch] > myarray[ch+1]) {
                ch++;
            }

            if (myarray[p] > myarray[ch]) {
                swap(myarray[p], myarray[ch]);
                p = ch;
            }
            else break;
        }

        return k;
    }

    void print() {
        for (int i = 1; i <= n; i++) printf("%d ", myarray[i]);
        printf("\n");
    }

    void sort() {
        // sort the items one by one by removing the elements
        while (n > 0) {
            printf("%d ", this->remove());
        }
        printf("\n");
    }
};

int main() {
    heap A;
    A.clear();

    A.insert(1);
    A.print();

    A.insert(2);
    A.print();

    A.insert(4);
    A.print();

    A.insert(3);
    A.print();

    A.insert(8);
    A.print();

    A.insert(9);
    A.print();

    A.insert(6);
    A.print();

    A.insert(5);
    A.print();

    printf("Deleting %d\n", A.remove());
    A.print();

    printf("Deleting %d\n", A.remove());
    A.print();

    printf("Deleting %d\n", A.remove());
    A.print();

    A.sort();

    return 0;
}
