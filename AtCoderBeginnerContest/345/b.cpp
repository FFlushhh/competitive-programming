#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    long long int x;
    cin >> x;
    if (x > 0) {
        if (x % 10 == 0) {
            cout << x / 10 << endl;
        }
        else {
            cout << (x + 10) / 10 << endl;
        }
    }
    else {
        cout << x / 10 << endl;
    }
    return 0;
}

/*
切り上げ除算
a / b のとき
(a + b - 1) / b

正の数の時は
    10で割り切れる場合はそのまま割る
    それ以外は10で割ったときに切り上げる
負の数の場合は切り捨てる
*/