#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> cuisines;
    unordered_map<int, vector<int> > ing;
    rep (i, m) {
        int k;
        cin >> k;
        cuisines[i + 1] = k;
        rep (j, k) {
            int a;
            cin >> a;
            ing[a].emplace_back(i + 1);
        }
    }
    int ans = 0;
    rep (i, n) {
        int b;
        cin >> b;
        rep (j, ing[b].size()) {
            cuisines[ing[b][j]]--;
            if (cuisines[ing[b][j]] == 0) {
                ans++;
                cuisines.erase(ing[b][j]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}