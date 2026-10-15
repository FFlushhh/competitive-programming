#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int n, k;
vector<int> r;

void func(vector<int> v)
{
    if (v.size() == n) {
        int sum = 0;
        rep (i, n) sum += v[i];
        if (sum % k == 0) {
            rep (i, n) cout << v[i] << " ";
            cout << endl;
        }
        return;
    }
    int idx = v.size();
    for (int i = 1; i <= r[idx]; ++i) {
        vector<int> v2 = v;
        v2.push_back(i);
        func(v2);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    r.resize(n);
    rep (i, n) cin >> r[i];
    func(vector<int>());
    return 0;
}