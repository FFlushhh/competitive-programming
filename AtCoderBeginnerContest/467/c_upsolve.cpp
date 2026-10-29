// ヒント見た

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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n - 1);
    rep(i, n) cin >> a[i];
    rep(i, n - 1) cin >> b[i];

    vector<int> copy_a = a;
    int cur1 = 0;
    rep(i, n - 1) {
        if ((a[i] + a[i + 1]) % m != b[i]) {
            a[i + 1]++;
            cur1++;
        }
    }
    
    a = copy_a;
    a[0]++;

    int cur2 = 1;
    rep(i, n - 1) {
        if ((a[i] + a[i + 1]) % m != b[i]) {
            a[i + 1]++;
            cur2++;
        }
    }

    cout << min(cur1, cur2) << "\n";
    return 0;
}

/*
m = 2より、1足すか足さないかだけ

A1は偶数とする
(A1 + A2) % 2 == 0のとき
    A2は偶数でないといけない
(A1 + A2) % 2 == 0のとき
    A2は奇数でないといけない

A1は確定した
A2を偶数とする
(A2 + A3) % 2 == 0のとき
    A3は偶数でないといけない
(A2 + A3) % 2 == 0のとき
    A3は奇数でないといけない

A2は確定した
...

=> A1で全て決まる
m = 2なので、各要素は最終的に偶数か奇数かだけ考えればよい
最初の要素の偶奇が決まると、残りのすべての要素の偶奇が一意に決まる
各要素の偶奇を変更するには、操作が1回必要。変更しなければ0回でよい
*/