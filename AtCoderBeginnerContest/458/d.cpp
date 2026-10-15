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
    
    int x;
    cin >> x;
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<int> > pqhigh;
    priority_queue<int> pqlow;
    while (q--) {
        int a, b;
        cin >> a >> b;
        if (x <= a) pqhigh.emplace(a);
        else pqlow.emplace(a);
        if (x <= b) pqhigh.emplace(b);
        else pqlow.emplace(b);

        if (pqlow.size() > pqhigh.size()) {
            int tmp = pqlow.top();
            pqlow.pop();
            pqhigh.emplace(x);
            x = tmp;
        } else if (pqlow.size() < pqhigh.size()) {
            int tmp = pqhigh.top();
            pqhigh.pop();
            pqlow.emplace(x);
            x = tmp;
        }
        cout << x << endl;
    }
    
    return 0;
}