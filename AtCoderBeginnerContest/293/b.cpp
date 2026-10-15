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
    
    int n;
    cin >> n;
    set<int> s;
    rep1(i, n) s.insert(i);
    rep(i, n) {
        int a;
        cin >> a;
        if (s.count(i + 1)) s.erase(a); 
    }
    cout << s.size() << endl;
    for (int x : s) {
        cout << x << " ";
    }
    return 0;
}