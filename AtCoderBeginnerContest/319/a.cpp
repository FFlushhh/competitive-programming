#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<pair<string, int>> v(10);
    v[0] = make_pair("tourist", 3858);
    v[1] = make_pair("ksun48", 3679);
    v[2] = make_pair("Benq", 3658);
    v[3] = make_pair("Um_nik", 3648);
    v[4] = make_pair("apiad", 3638);
    v[5] = make_pair("Stonefeang", 3630);
    v[6] = make_pair("ecnerwala", 3613);
    v[7] = make_pair("mnbvmar", 3555);
    v[8] = make_pair("newbiedmy", 3516);
    v[9] = make_pair("semiexp", 3481);
    string s;
    cin >> s;
    for (int i = 0; i < 10; i++)
    {
        if (s == v[i].first)
        {
            cout << v[i].second << endl;
            return 0;
        }
    }
}