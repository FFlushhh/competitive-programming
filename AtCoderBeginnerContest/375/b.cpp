#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> x;
    vector<int> y;
    long double dist = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
        if (i == 0){
            dist += sqrt(pow(x[i] - 0, 2) + pow(y[i] - 0, 2));
        }
        else if (i >= 1) {
            dist += sqrt(pow(x[i] - x[i-1], 2) + pow(y[i] - y[i-1], 2));
        }
        if (i == n - 1) {
            dist += sqrt(pow(x[i] - 0, 2) + pow(y[i] - 0, 2));
        }
    }
    cout << fixed << setprecision(20) << dist << endl;
    return 0;
}

/*
cout << fixed << setprecision(桁数) << 変数 << endl;
小数点以下の桁数を指定して出力できる
*/