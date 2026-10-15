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
    
    int n, m;
    cin >> n >> m;
    vector<pair<ll, ll> > a(n), b(m);
    rep(i, n) {
        cin >> a[i].first;
        a[i].second = i;
    }
    rep(i, m) {
        cin >> b[i].first;
        b[i].second = i;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int idxa = 0, idxb = 0;
    ll idxc = 1;
    while (idxa < n || idxb < m) {
        if (idxa < n && idxb < m) {
            if (a[idxa].first < b[idxb].first) {
                a[idxa].first = idxc++;
                swap(a[idxa].first, a[idxa].second);
                idxa++;
            } else {
                b[idxb].first = idxc++;
                swap(b[idxb].first, b[idxb].second);
                idxb++;
            }
        } else if (idxa < n) {
            a[idxa].first = idxc++;
            swap(a[idxa].first, a[idxa].second);
            idxa++;
        } else {
            b[idxb].first = idxc++;
            swap(b[idxb].first, b[idxb].second);
            idxb++;
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    rep(i, n) cout << a[i].second << " ";
    cout << endl;
    rep(i, m) cout << b[i].second << " ";
    cout << endl;
    return 0;
}