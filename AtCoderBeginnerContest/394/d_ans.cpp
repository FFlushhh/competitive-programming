#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    stack<char> st;
    rep (i, s.size()) {
        if (st.empty()) {
            st.emplace(s[i]);
            continue;
        }
        char c = st.top();
        if ((c == '(' && s[i] == ')') || (c == '[' && s[i] == ']') || (c == '<' && s[i] == '>')) st.pop();
        else st.emplace(s[i]);
    }
    cout << (st.empty() ? "Yes" : "No") << endl;
    return 0;
}