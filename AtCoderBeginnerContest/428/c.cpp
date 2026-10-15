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
    
    int q;
    cin >> q;
    stack<pair<ll, ll> > st;
    st.emplace(0, 0);
    ll now = 0;
    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            char c;
            cin >> c;
            ll balance = st.top().first;
            ll mn = st.top().second;
            if (c == '(') {
                balance++;
            } else {
                balance--;
            }
            mn = min(mn, balance);
            st.emplace(balance, mn);
        } else {
            st.pop();
        }
        auto [balance, mn] = st.top();
        if (balance == 0 && mn >= 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}