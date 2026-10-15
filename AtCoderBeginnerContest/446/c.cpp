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
    
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> a(n), b(n);
        rep(i, n) cin >> a[i];
        rep(i, n) cin >> b[i];
        deque<pair<ll, ll> > zaiko;
        ll sum = 0;
        rep(i, n) {
            // あさ
            zaiko.emplace_back(i, a[i]);
            sum += a[i];

            // ひる
            while (b[i] > 0) {
                auto [day, left] = zaiko.front();
                zaiko.pop_front();
                if (b[i] - left > 0) { // b[i] >= left
                    sum -= left;
                    b[i] -= left;
                } else { // b[i] < left
                    sum -= b[i];
                    left -= b[i];
                    zaiko.emplace_front(day, left);
                    break;
                }
            }

            // よる
            while (true) {
                auto [day, left] = zaiko.front();
                if (i - day >= d) {
                    zaiko.pop_front();
                    sum -= left;
                } else break;
            }
            // auto [day, left] = zaiko.front();
            // cout << "day" << i << ": " << left << endl;
        }

        cout << sum << endl;
    }
    return 0;
}