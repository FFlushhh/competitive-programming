#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    vector<int> a;
    while (1) {
        int x;
        cin >> x;
        a.emplace_back(x);
        if (x == 0) break;
    }
    for (int i = a.size() - 1; i >= 0; --i) {
        cout << a[i] << endl;
    } 
    return 0;
}