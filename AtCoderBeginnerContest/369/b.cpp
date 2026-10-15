#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count = 0;
    int Lmemory = 0;
    int Rmemory = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        char s;
        cin >> a >> s;
        if (s == 'L') {
            if (Lmemory == 0) {
                Lmemory = a;
            } else {
                count += abs(a - Lmemory);
                Lmemory = a;
            }
        }
        else if (s == 'R') {
            if (Rmemory == 0) {
                Rmemory = a;
            } else {
                count += abs(a - Rmemory);
                Rmemory = a;
            }
        }
    }
    cout << count << endl;
    return 0;
}