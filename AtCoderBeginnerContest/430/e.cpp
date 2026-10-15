#include <bits/stdc++.h>
#include <atcoder/string>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        vector<int> z = atcoder::z_algorithm(b + '$' + a + a);
        int n = a.size(); // aとbは同じ長さ
        bool found = false;
        rep(i, a.size()) {
            // bの先頭がaの先頭から何文字目か、そこから始まる部分文字列がbと一致するか
            if (z[n + 1 + i] == n) {
                cout << i << endl;
                found = true;
                break;
            }
        }
        if (!found) cout << -1 << endl;
    }
    return 0;
}

/*
A + A の文字列の中にBがあれば次へ、なければ-1
あれば、Bの先頭は、Aの先頭から何文字目かを調べる

文字列検索アルゴリズム
・KMP法
・Z-algorithm
・Suffix Array
・Rolling Hash

- Z-algorithm
  文字列Sの各接頭辞S[0..i]とS全体の最長共通接頭辞の長さを求める
  計算量O(|S|)

  使い方:
  S = B + '$' + A + A としてZ-algorithmを実行
  Z値が|B|に等しいものがあれば、BはA + Aの中に存在する
  そのとき、Bの先頭はAの先頭から(i - |B| - 1) % |A|文字目
*/