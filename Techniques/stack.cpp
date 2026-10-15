#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

// A51
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    stack<string> s;
    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            string x;
            cin >> x;
            s.emplace(x);
        }
        else if (t == 2) {
            string str = s.top();
            cout << str << endl;
        }
        else {
            s.pop();
        }
    }
    return 0;
}

/*
stack...上だけの操作、積み重ねるイメージ
s.top() : stackの一番上の要素を取得
s.pop() : stackの一番上の要素を削除
*/