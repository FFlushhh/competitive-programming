#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n, m, l;
    int q;
    cin >> n;
    vector<int> a(n);
    rep (i, n) cin >> a[i];
    cin >> m;
    vector<int> b(m);
    rep (i, m) cin >> b[i];
    cin >> l;
    vector<int> c(l);
    rep (i, l) cin >> c[i];

    bitset<300000001> bs; // 300000000までの数を管理するビット列
    rep (i, n) {
        rep (j, m) {
            rep (k, l) {
                bs[a[i] + b[j] + c[k]] = true; // a[i] + b[j] + c[k]の値をtrueにする
            }
        }
    }
    cin >> q;
    rep (i, q) {
        int x;
        cin >> x;
        if (bs[x]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}


// 自分の考え...2分探索を使って、a[i] + b[j] + c[k] = x となるようなi, j, kが存在するかどうかを判定する
// 解答...bitset
// 300000000までの数を管理するビット列を用意し、a[i] + b[j] + c[k]の値をtrueにする
// その後、クエリに対して、bs[x]がtrueかどうかを判定する
// この方法だと、O(nml)で解ける

// bitsetのメリット
// ・ビット演算が高速
// ・メモリ効率が良い
// ・ビット列の長さが固定されている場合に使うと良い
// ・ビット列の長さが可変の場合はvector<bool>を使うと良い

/*
bitset...ビットを管理するためのクラス
bitset<何ビット表示するか> 変数名;
例
bitset<8> bs; // 8ビットのビット列を持つ変数
bitset<8> bs(0b1010); // 0b1010を8ビットのビット列に変換して代入
bitset<8> bs = 43; // 43を8ビットのビット列に変換して代入
*/