#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string x;
    cin >> x;
    int ans = INT_MAX;
    sort(all(x));
    do {
        if (x.front() == '0') continue;
        int i = stoi(x);
        ans = min(i, ans);
    } while (next_permutation(all(x)));
    cout << ans << endl;
    return 0;
}