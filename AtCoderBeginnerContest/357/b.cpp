#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    string s;
    int capital = 0;
    int small = 0;
    cin >> s;
    rep (i, s.size()) {
        if (isupper(s[i])) 
            ++capital;
        else 
            ++small;
    }
    if (capital > small) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;
    return 0;
}

// isupper(s[i])は文字が大文字かどうかを判定する関数
// islower(s[i])は文字が小文字かどうかを判定する関数
// transform(s.begin(), s.end(), s.begin(), ::toupper)は文字列sの全ての文字を大文字に変換する関数
// transform(s.begin(), s.end(), s.begin(), ::tolower)は文字列sの全ての文字を小文字に変換する関数
// これらの関数はalgorithmヘッダファイルに含まれている