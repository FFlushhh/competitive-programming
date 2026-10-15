#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n;
    int sum = 0;
    int mod = 0;
    cin >> n;
    vector<string> s(n);
    vector<int> c(n);
    rep(i, n) cin >> s[i] >> c[i];
    sort(s.begin(), s.end());
    rep (i, n) {
        sum += c[i];
    }
    mod = sum % n;
    cout << s[mod] << endl;
    return 0;
}