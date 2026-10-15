#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;
    cin >> n >> s;
    vector<int> cnt(26); // 26個のアルファベットの出現回数を記録する
    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && s[j] == s[i]) ++j; // 同じ文字が連続している部分を探す
        cnt[s[i] - 'a'] = max(cnt[s[i] - 'a'], j - i); // 同じ文字が連続している部分の最大長を記録する
        i = j;
    }
    int ans = 0;
    for (int i = 0; i < 26; ++i) ans += cnt[i];
    cout << ans << endl;
    return 0;
}