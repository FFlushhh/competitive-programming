#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;

    while (T--) {
        int n;
        string s;
        cin >> n >> s;

        int full = (1 << n) - 1;
        vector<bool> safe(full + 1, false); // safe[s]は状態sが安全かどうか
        safe[0] = true;
        rep1(i, full) {
            safe[i] = (s[i - 1] == '0'); // 0なら安全、1なら危険
        }

        vector<bool> visited(full + 1, false);
        queue<int> q;
        q.emplace(0); // 初期状態は全ての薬品が入っていない状態
        visited[0] = true;

        bool canReachFull = false; // 全ての薬品が入った状態に到達可能かどうか
        while (!q.empty()) {
            int state = q.front(); q.pop();
            if (state == full) {
                canReachFull = true; // 全ての薬品が入った状態に到達
                break;
            }
            for (int i = 0; i < n; ++i) {
                if (!(state >> i & 1)) {
                    int next = state | (1 << i);        // 薬品iを入れた状態nextを作る
                    if (safe[next] && !visited[next]) { // 状態nextが安全で未訪問なら
                        visited[next] = true;           // 状態nextを訪問済みにする
                        q.emplace(next);                // 次の状態をキューに追加
                    }
                }
            }
        }
        cout << (canReachFull ? "Yes" : "No") << endl; // 全ての状態に到達可能かどうかを出力
    }
    return 0;
}