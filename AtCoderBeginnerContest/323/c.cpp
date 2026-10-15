#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> a(m);
    rep (i, m) {
        cin >> a[i].first;
        a[i].second = i;
    }
    vector<int> score(n);
    vector<string> s(n);
    int Max = 0, idxMemo = 0;
    rep (i, n) {
        cin >> s[i];
        rep (j, m) {
            if (s[i][j] == 'o') {
                score[i] += a[j].first;
            }
        }
        score[i] += i + 1;
        if(score[i] > Max) {
            Max = score[i];
            idxMemo = i;
        }
    }

    sort(a.rbegin(), a.rend());

    rep (i, n) {
        int cnt = 0;
        int idx = 0;
        while (score[i] <= Max) {
            if (i == idxMemo) break;
            if (s[i][a[idx].second] == 'x') {
                score[i] += a[idx].first;
                cnt++;
            }
            idx++;
        }
        cout << cnt << endl;
    }
    return 0;
}

/*
解説...解いてない問題を降順に並べて、それを順番に見ていく
*/