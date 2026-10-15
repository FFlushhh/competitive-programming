#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    set<char> st;
    for (char c = 'a'; c <= 'z'; ++c) {
        st.insert(c);
    }
    for (char c : s) {
        st.erase(c);
    }
    cout << *st.begin() << '\n';
    return 0;
}