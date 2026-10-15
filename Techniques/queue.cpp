#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

// A52
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    queue<string> que;
    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            string s;
            cin >> s;
            que.emplace(s);
        }
        else if (t == 2) {
            cout << que.front() << endl;
        }
        else {
            que.pop();
        }
    }
    return 0;
}

/*
queue...先頭と末尾の操作、待ち行列のイメージ
que.front() : 先頭の要素を取得
que.pop() : 先頭の要素を削除
*/