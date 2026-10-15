#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

constexpr int di[] = {1, 0, -1, 0};
constexpr int dj[] = {0, 1, 0, -1};
// constexpr int di[] = {1, 1, 0, -1, -1, -1, 0, 1};
// constexpr int dj[] = {0, 1, 1, 1, 0, -1, -1, -1};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        queue<pair<int, int> > q;
        vector<vector<bool> > visited(n, vector<bool>(n));
        int left = n * n - 2;
        q.emplace(0, 0);
        visited[0][0] = true;
        string way = "";
        char prev = 'N', go = 'N';
        while (!q.empty()) {
            auto [i, j] = q.front();
            q.pop();
            
            /*
            上から順番に下っていく
            (a, b)にはいかずに遠回り
            (n, n)にたどり着いたとき、left == 0ならYes
            */

            if (prev == 'N') go = 'L';
            else if
        }
    }
    return 0;
}