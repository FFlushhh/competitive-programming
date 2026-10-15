#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    vector<int> a;
    vector<pair<int, int>> b;
    vector<int> ans;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    for (int i = 0; i < m; ++i) {
        int tmp;
        cin >> tmp;
        b.emplace_back(make_pair(tmp, i));
        ans.push_back(-1);
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < n; ++i) {
        while(!b.empty() && b.back().first >= a[i]) {
            ans[b.back().second] = i + 1;
            b.pop_back();
        }
    }
    for (int i = 0; i < m; ++i) {
        cout << ans[i] << endl;
    }
    return 0;
}