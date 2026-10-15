#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s;
    cin >> s;
    int cnt = 0;
    while (s > 60) {
        s -= 60;
        ++cnt;
    }
    if (cnt <= 2) {
        if (s <= 20) {
            cout << "True" << endl;
        }
        else if (s % 2 == 0 || s % 3 == 0) {
            cout << "True" << endl;
        }
        else {
            cout << "False" << endl;
        }
    }
    else {
        cout << "False" << endl;
    }
    return 0;
}