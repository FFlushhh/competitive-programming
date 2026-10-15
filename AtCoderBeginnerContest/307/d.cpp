    #include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    #define rep(i, n) for (int i = 0; i < (int)(n); ++i)

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        int cnt = 0;
        rep (i, n) {
            if (st.empty() || s[i] != ')') {
                st.push(s[i]);
                if (s[i] == '(') ++cnt;
            }
            else {
                if (cnt > 0) {
                    while (!st.empty()) {
                        auto t = st.top();
                        st.pop();
                        if (t == '(') {
                            --cnt;
                            break;
                        }
                    }
                }
                else st.push(s[i]);
            }
        }
        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
        return 0;
    }