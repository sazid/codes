#include <iostream>
using namespace std;

const int CHILDREN_SIZE = 26;
struct trie_node {
    trie_node *children[CHILDREN_SIZE]{};
    bool isEndOfWord{false};
};

trie_node *getNode() {
    auto *n = new trie_node;
    for (auto &i : n->children)
        i = nullptr;
    return n;
}

void insertNode(trie_node *root, string s) {
    auto p = root;
    for (auto &i : s) {
        int index = i - 'A';
        if (p->children[index] == nullptr)
            p->children[index] = getNode();
        p = p->children[index];
    }
    p->isEndOfWord = true;
}

bool searchNode(trie_node *root, string s) {
    auto p = root;
    for (char &i : s) {
        int index = i - 'A';
        if (p->children[index] == nullptr)
            return false;
        p = p->children[index];
    }
    return p != nullptr and p->isEndOfWord;
}

int main() {
    trie_node *root = getNode();

    insertNode(root, "HELLO");
    insertNode(root, "HE");
    insertNode(root, "HAVE");
    insertNode(root, "HAD");
    insertNode(root, "HAS");
    insertNode(root, "HALT");
    insertNode(root, "HELL");

    searchNode(root, "HELLO") ? cout << "Yes\n" : cout << "No\n";
    searchNode(root, "HE") ? cout << "Yes\n" : cout << "No\n";
    searchNode(root, "HA") ? cout << "Yes\n" : cout << "No\n";
    searchNode(root, "HAD") ? cout << "Yes\n" : cout << "No\n";

    return 0;
}
