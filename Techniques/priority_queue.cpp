#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

// A53
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            int x;
            cin >> x;
            pq.emplace(x);
        }
        else if (t == 2) {
            cout << pq.top() << endl;
        }
        else {
            pq.pop();
        }
    }
    return 0;
}

/*
priority_queue
...優先度付きキューを表すデータ構造で、要素が追加されると自動的にソートされる。
...要素の追加、取得、削除がO(logN)で行える。

priority_queue<int> pq; // int型、降順（最優先は大きいもの）
priority_queue<int, vector<int>, greater<int>> pq; // int型、昇順（最優先は小さいもの）

pq.top(); // 最も小さいもの、最も大きいものを取得
pq.pop(); // 最も小さいもの、最も大きいものを削除
*/