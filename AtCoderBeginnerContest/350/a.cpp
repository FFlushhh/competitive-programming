#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    string s;
    int num = 0;
    cin >> s;
    s.erase(s.begin(), s.begin() + 3);
    num = stoi(s);
    if (num >= 1 && num <= 349 && num != 316) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}

/*
erase関数...指定した位置の要素を削除する
erase(s.begin(), s.begin() + 3 )...先頭から3文字目まで削除

stoi関数...文字列を数値に変換する
stoi(s)...文字列sを数値に変換
*/