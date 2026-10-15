#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count = 0;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < 2 * n; ++i) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    for (int i = 0; i < 2 * n - 2; ++i) {
        if (a[i] == a[i + 2]) {
            ++count;
        }
    }
    cout << count << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n;
    cin >> n;
    
    return 0;
}