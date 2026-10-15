#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    long long int n;
    long long int ans = -1;
    cin >> n;
    for (long long int i = 1; i * i * i <= n; ++i) {
        string s = to_string(i * i * i);
        bool judge = true;
        for (int j = 0; j < s.size(); ++j) {
            if (s[j] != s[s.size() - j - 1]) {
                judge = false;
            }
        }
        if (judge) {
            ans = i * i * i;
        }
    }
    cout << ans << endl;
    return 0;
}

// 高々10^18なので、i^3の値を全探索して、その値が回文数かどうかを判定する。
//O(logN)で回文数判定ができるので、全体の計算量はO(logN * 10^6)で間に合う。
 // ただし、i^3の値が回文数であるかどうかを判定するために、文字列に変換して判定するのは遅いので、
    // 10進数の桁数を求めて、上位と下位の桁を比較する方法を使う。