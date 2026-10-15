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
    bitset<30> bs;
    int count = 0;
    for (int i = bs.size() - 1; i >= 0; --i) {
        if (!bs[i]) {
            count++;
        }
        else {
            break;
        }
    }
    cout << count << endl;
    return 0;
}