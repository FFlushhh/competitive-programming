#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c;
    vector<int> a;
    int count = 1;
    int memory = 0;

    cin >> n >> c;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 1; i < n; ++i){
        if (a[i] - a[memory] >= c){
            ++count;
            memory = i;
        }
    }

    cout << count << endl;
    return 0;
}