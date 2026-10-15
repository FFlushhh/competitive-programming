#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int a, b;
    cin >> a >> b;
    if (a == b) {
        cout << -1 << endl;
    }
    else {
        if (a == 1) {
            if (b == 2) {
                cout << 3 << endl;
            }
            else {
                cout << 2 << endl;
            }
        }
        if (a == 2) {
            if (b == 1) {
                cout << 3 << endl;
            }
            else {
                cout << 1 << endl;
            }
        }
        if (a == 3) {
            if (b == 1) {
                cout << 2 << endl;
            }
            else {
                cout << 1 << endl;
            }
        }
    }
    
    return 0;
}