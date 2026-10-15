#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll H, W;
    int N;
    cin >> H >> W >> N;

    vector<ll> h(N), w(N);
    for (int i = 0; i < N; i++) cin >> h[i] >> w[i];

    // key = height, value = max-heap of (width, idx)
    map<ll, priority_queue<pair<ll,int>>> byH;
    // key = width, value = max-heap of (height, idx)
    map<ll, priority_queue<pair<ll,int>>> byW;

    for (int i = 0; i < N; i++) {
        byH[h[i]].push({w[i], i});
        byW[w[i]].push({h[i], i});
    }

    vector<char> used(N, 0);
    vector<ll> ansX(N, -1), ansY(N, -1);

    ll curH = H, curW = W;
    int remain = N;

    auto pop_valid_H = [&](ll Hkey) -> pair<ll,int> {
        auto it = byH.find(Hkey);
        if (it == byH.end()) return {-1, -1};
        auto &pq = it->second;
        while (!pq.empty() && used[pq.top().second]) pq.pop();
        if (pq.empty()) return {-1, -1};
        return pq.top(); // (width, idx)
    };

    auto pop_valid_W = [&](ll Wkey) -> pair<ll,int> {
        auto it = byW.find(Wkey);
        if (it == byW.end()) return {-1, -1};
        auto &pq = it->second;
        while (!pq.empty() && used[pq.top().second]) pq.pop();
        if (pq.empty()) return {-1, -1};
        return pq.top(); // (height, idx)
    };

    while (remain > 1) {
        // 縦ストリップ候補：高さ curH
        auto candV = pop_valid_H(curH); // (width, idx)
        // 横ストリップ候補：幅 curW
        auto candH = pop_valid_W(curW); // (height, idx)

        bool okV = false, okH = false;

        if (candV.second != -1) {
            ll ww = candV.first;
            // 残りが 1 枚でない限り、幅を 0 にしてはいけない
            if (ww < curW) okV = true;
        }
        if (candH.second != -1) {
            ll hh = candH.first;
            if (hh < curH) okH = true;
        }

        // 入力保証により、ここで okV か okH のどちらかは必ず true になる（はず）
        // もし両方 true ならどちらでも進められるが、ここでは okV を優先する
        if (okV) {
            ll ww = candV.first;
            int idx = candV.second;

            // 右端に貼る（左上は固定 (1,1)）
            ansX[idx] = 1;
            ansY[idx] = curW - ww + 1;

            used[idx] = 1;
            // heap からは lazy で消すので、ここでは pop しなくてもよいが、
            // 次の参照時に同じ top だと困るので pop しておく
            byH[curH].pop();

            curW -= ww;
            remain--;
        } else {
            // okH のはず
            ll hh = candH.first;
            int idx = candH.second;

            // 下端に貼る
            ansX[idx] = curH - hh + 1;
            ansY[idx] = 1;

            used[idx] = 1;
            byW[curW].pop();

            curH -= hh;
            remain--;
        }
    }

    // 最後の 1 枚（未使用のピース）を (1,1) に置く
    int last = -1;
    for (int i = 0; i < N; i++) if (!used[i]) { last = i; break; }
    // 入力保証があるので last は必ず見つかる
    ansX[last] = 1;
    ansY[last] = 1;

    for (int i = 0; i < N; i++) {
        cout << ansX[i] << " " << ansY[i] << "\n";
    }
    return 0;
}