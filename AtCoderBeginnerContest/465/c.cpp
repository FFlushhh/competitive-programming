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
    
    int n;
    string s;
    cin >> n >> s;
    deque<int> dq;
    int op = 0;
    rep(i, n) {
        if (op == 0) {
            dq.emplace_back(i + 1);
        } else {
            dq.emplace_front(i + 1);
        }
        if (s[i] == 'o') op = 1 - op;
    }
    if (op == 0) {
        rep(i, n) {
            int t = dq.front();
            dq.pop_front();
            cout << t << " ";
        }
    } else {
        rep(i, n) {
            int t = dq.back();
            dq.pop_back();
            cout << t << " ";
        }
    }
    return 0;
}