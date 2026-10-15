#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> a(n);
    rep (i, n) cin >> a[i];
    vector<int> que;
    rep (i, n) {
        int x = a[i];
        while (!que.empty() && que.back() == x) {
            x++;
            que.pop_back();
        }
        que.emplace_back(x);
    }
    cout << que.size() << endl;
    return 0;
}