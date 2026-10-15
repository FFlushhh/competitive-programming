#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    bool judge = true;
    cin >> n >> s;

    if (n % 2  != 1) {
        judge = false;
    }
    else {
        for (int i = 0; i < s.size(); ++i) {
            if (i < ((s.size() + 1) / 2) - 1){
                if (s[i] != '1') {
                    judge = false;
                    break;
                }
            }
            else if (i == s.size() / 2) {
                if (s[i] != '/') {
                    judge = false;
                    break;
                }
            }
            else {
                if (s[i] != '2') {
                    judge = false;
                    break;
                }
            }
        }
    }

    if (judge) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

// '/'の前は1、後ろが2で、数字の数が等しいかどうかを判定