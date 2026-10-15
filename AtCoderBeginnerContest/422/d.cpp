#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    vector<int> ans{k};
    rep(i, n) {
        vector<int> next;
        for (int a : ans) {
            next.emplace_back(a / 2);
            next.emplace_back(a - a / 2);
        }
        ans = next;
    }
    ll mx = *max_element(ans.begin(), ans.end());
    ll mn = *min_element(ans.begin(), ans.end());
    ll U = mx - mn;
    cout << U << "\n";
    for (int a : ans) {
        cout << a << " ";
    }
    return 0;
}