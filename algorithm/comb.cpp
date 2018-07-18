#include <bits/stdc++.h>
using namespace std;

int _ = 3;
int variations = 2;
int varr[] = {0, 1};

void comb(vector<int> &v) {
    if (v.size() == _) {
        for (auto i : v) cout << i;
        cout << endl;
        return;
    }
    
    for (int i = 0; i < variations; ++i) {
        v.push_back(varr[i]);
        comb(v);
        v.pop_back();
    }
}

int main() {
    vector<int> v;
    comb(v);
    return 0;
}

