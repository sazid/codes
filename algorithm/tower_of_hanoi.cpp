#include <iostream>
using namespace std;

void hanoi(int n, char src, char dst, char aux) {
    if (n == 1) {
        cout << "Moving disk 1 from " << src << " to " << dst << '\n';
        return;
    }

    hanoi(n-1, src, aux, dst);
    cout << "Moving disk " << n << " from " << src << " to " << dst << '\n';
    hanoi(n-1, aux, dst, src);
}

int main() {
    hanoi(3, 'A', 'C', 'B');
    return 0;
}

