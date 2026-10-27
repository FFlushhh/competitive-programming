// ヒントだけ見た

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

    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;

        vector<int> cnt(26);
        int n = s.size();
        rep(i, n) {
            int c = s[i] - 'a';
            cnt[c]++;
        }

        priority_queue<pair<int, char>> pq;
        rep(i, 26) {
            if (cnt[i] == 0) continue;
            pq.emplace(cnt[i], 'a' + i);
        }

        if (pq.top().first > (n + 1) / 2) {
            No;
            continue;
        }

        Yes;

        string ans = "";

        while (!pq.empty()) {
            // 1番目に優先
            auto [val, ch] = pq.top();
            pq.pop();

            if (ans.empty() || (!ans.empty() && ans.back() != ch)) {
                ans += ch;
                val--;

                if (val == 0) continue;

                pq.emplace(val, ch);
            } else {
                // 2番目に優先
                auto [sval, sch] = pq.top();
                pq.pop();

                ans += sch;
                sval--;
                
                pq.emplace(val, ch);

                if (sval == 0) continue;

                pq.emplace(sval, sch);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}

/// - 何ごとの話にすると見やすい？ 何だけ持てばいい？
///
/// - それについて、何が分かれば答えになる？
///
/// - 何を捨ててよく、なぜそれで足りる？ 何が効く / 何が禁止？
///
/// - その情報をどう更新 / 判定 / 集計すれば実装できる？
///

/*
シミュレーションすると無理

文字列をすべて見て、
事前に対象文字とその出現回数を保存しておき、
(出現回数, 文字)を持つpriority_queueを持つ
最も出現回数の多い文字が、
(文字列の長さ + 1) / 2 回以下であればYes
そうでなければNo

Yesのとき、答えの文字列を構築する
使わないといけない残り回数が多い文字を優先的に使い、
直前の文字がその文字と同じときは、2番目に多い文字を使う
*/