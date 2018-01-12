#include <bits/stdc++.h>

#define PLN pair<long, node*>
using namespace std;

struct node {
    string data;
    bool visited = false;
    vector<PLN > adjacents;
};

PLN VISIT(long cost, node *n, node *find) {
    if (n->visited || n == find) return {cost, n};
    n->visited = true;
//    cout << "Visiting " << n->data << ", Distance: " << cost << endl;
    for (auto x : n->adjacents) {
        auto r = VISIT(cost + x.first, x.second, find);
        if (r.second == find) return r;
    }
    return {cost, n};
}

void reinit(node *n) {
    n->visited = false;
}

int main() {

    node n1, n2, n3, n4, n5;
    node *nodes[] = {&n1, &n2, &n3, &n4, &n5};

    n1.data = "Dhaka";
    n2.data = "Chittagong";
    n3.data = "Rajshahi";
    n4.data = "Kathmandu";
    n5.data = "Butwal";

    n1.adjacents.emplace_back(300, &n3);
    n1.adjacents.emplace_back(200, &n2);
    n2.adjacents.emplace_back(200, &n1);
    n2.adjacents.emplace_back(3000, &n4);
    n2.adjacents.emplace_back(8000, &n5);
    n3.adjacents.emplace_back(300, &n1);
    n4.adjacents.emplace_back(3000, &n2);
    n5.adjacents.emplace_back(8000, &n2);


//    auto r = VISIT(0, &n4, &n1);
//    cout << r.first << endl;

    int Q;
    string a, b;
    cin >> Q;
    while (Q--) {
        cin >> a >> b;
        node *node1, *node2;
        for (auto n : nodes) {
            if (n->data == a) {
                node1 = n;
            } else if (n->data == b) {
                node2 = n;
            }
        }

        auto r = VISIT(0, node1, node2);
        cout << r.first << endl;

        for (auto n : nodes) {
            reinit(n);
        }
    }

    return 0;
}

