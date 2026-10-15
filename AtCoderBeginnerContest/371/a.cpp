#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ab, ac, bc;
    cin >> ab >> ac >> bc;

    if ((ab == '<' && ac == '>' && bc == '>') || (ac == '<' && ab == '>' && bc == '<')) {
        cout << "A" << endl;
        return 0;
    }
    else if ((ab == '>' && bc == '>' && ac == '>') || (ab == '<' && bc == '<' && ac == '<')) {
        cout << "B" << endl;
        return 0;
    }
    else {
        cout << "C" << endl;
        return 0;
    }
}