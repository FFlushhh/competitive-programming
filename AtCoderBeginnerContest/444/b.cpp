#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        string s = to_string(i);
        int sum = 0;
        cout << s << endl;
        if (!s.empty()) {
            sum += int(s.back() - '0');
            s.pop_back();
        }
        if (sum == k) cnt++;
    }
    cout << cnt << endl;
    return 0;
}