#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n, q;
    int count = 0;
    cin >> n >> q;
    vector<bool> exist(n, true);
    rep (i ,q) {
        int t;
        cin >> t;
        if (exist[t - 1] == true) {
            exist[t - 1] = false;
        }
        else {
            exist[t - 1] = true;
        }
    }
    rep (i, n) {
        if (exist[i] == true) {
            ++count;
        }
    }
    cout << count << endl;
    return 0;
}

/*
vectorを全て同じ値で初期化
vector<bool> v(n, true)...n個のtrueで初期化
vector<int> v(n, 0)...n個の0で初期化
*/