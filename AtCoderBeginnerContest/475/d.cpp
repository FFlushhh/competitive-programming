#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

// 素数判定: O(√n) 
// FFlush's Library
/// @param n 判定する整数 (n >= 0)
bool isPrime(long long n)
{
    // check small number
    if (n < 2) return false;

    // check even number
    if (n % 2 == 0) return n == 2;

    // check odd number
    for (long long i = 3; i <= n / i; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    map<ll, vector<ll>> same;
    rep(i, s.size()) {
        same[s[i] - 'a'].emplace_back(i);
    }

    string t = "";
    rep(i, s.size()) t += "1";
    for (auto [key, val] : same) {
        for (int i = 0; i <= 9; ++i) {
            for (int j : val) {
                t[j] = i;
            }
        }
        if (t[0] == '0') continue;
        cout << t << endl;
        ll x = stoll(t);
        if (isPrime(x)) {
            cout << t << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}