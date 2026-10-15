#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> v;
    rep (i, 10) {
        v.emplace_back(i);
    }
    rep (i, 10) {
        if (v[i] != a + b) {
            cout << v[i] << endl;
            return 0;
        }
    }
    
    return 0;
}