#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

// メモ化再帰とは
// 一度計算した結果をメモしておいて、同じ計算が再度行われた場合にメモした結果を返すことで計算量を削減する手法

map<ll, ll> memo;
ll f(ll n)
{
    if (n == 1) return 0; // 終了条件
    if (memo.count(n)) return memo[n]; // メモがあればそれを返す
    return memo[n] = f(n / 2) + f((n + 2 - 1) / 2) + n; // メモがなければ計算してメモに記録してから返す
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}

/*
方針
    1. 1の時は0を返す
    2. それ以外の時は
        1. n / 2
        2. (n + 2 - 1) / 2
        3. n
    3. 1と2の結果を足してnを足す
    4. 2の結果をメモしておく
    5. 3の結果を返す
*/