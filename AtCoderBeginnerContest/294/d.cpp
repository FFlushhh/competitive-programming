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
    
    int n, q;
    cin >> n >> q;
    queue<int> que;
    set<int> st;
    int num = 1;
    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            que.emplace(num);
            num++;
        } else if (op == 2) {
            int x;
            cin >> x;
            st.insert(x);
        } else {
            while (!que.empty() && st.count(que.front())) {
                que.pop();
            }
            cout << que.front() << endl;
        }
    }
    return 0;
}