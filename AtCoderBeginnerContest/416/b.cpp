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
    
    string s;
    cin >> s;
    string t = "";
    rep(i, s.size()) {
        if (s[i] == '.') {
            if (i == 0) t += 'o';
            else t += '.';
        }
        else if (s[i] == '#') {
            if (i + 1 < s.size() && s[i + 1] == '.') {
                t += "#o";
                i++;
            }
            else t += '#';
        }
    }
    cout << t << endl;
    return 0;
}