#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using vll = vector<long long>;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    int id = 1;
    set<string> st;
    map<string, int> mp;
    
    while (q--) {
        string s;
        cin >> s;
        
        if (st.count(s)) {
            cout << mp[s] << endl;
        } else {
            mp[s] = id;
            st.emplace(s);
            cout << id << endl;
            ++id;
        }
    }

    return 0;
}