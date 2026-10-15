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
    int front = 0;
    vector<int> b(n, n); // サイズnの配列bを作成し、全ての要素をnに初期化
    rep (i, n) {
        int a;
        cin >> a;
        --a; 
        if (a < 0) {
            front = i;
        }
        else {
            b[a] = i; // 人iの前が人a、すなわち人aの後ろが人i
        }
    }

    while (front < n) {
        cout << front + 1 << " ";
        front = b[front]; // 人frontの後ろが次のfront
    }
    cout << endl;
    return 0;
}