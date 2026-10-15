#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long long sum = 0;
    rep (i, n) {
        int a;
        cin >> a;
        sum += a;
        if (sum < 0) {
            sum = 0;
        }
    }
    cout << sum << endl; 
    return 0;
}