// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, q;
//     vector<char> h;
//     vector<int> t;
//     int move = 0;
//     int currentleft = 1;
//     int currentright = 2;

//     cin >> n >> q;
//     for (int i = 0; i < q; ++i){
//         char x;
//         int y;
//         cin >> x >> y;
//         h.push_back(x);
//         t.push_back(y);
//     }

//     for (int i = 0; i < q; ++i){
//         if (h[i] == 'L'){
//             if (currentleft < t[i] && t[i] < currentright) {
//                 while (currentleft != 1){
//                     --currentleft;
//                     ++move;
//                 }
//                 currentleft = n;
//                 while (currentleft != t[i]){
//                     --currentleft;
//                     ++move;
//                 }
//             }
//             else {
//                 move = t[i] - currentleft;
//             }
//         }
//         else {
//             if (currentright < t[i] && t[i] < currentleft){
//                 while (currentright != 1) {
//                     --currentright;
//                     ++move;
//                 }
//                 currentright = n;
//                 while (currentright != t[i]){
//                     --currentright;
//                     ++move;
//                 }
//             }
//             else {
//                 move = currentright - t[i];
//             }
//         }
//     }

//     cout << move << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int left = 1, right = 2;  // 左と右の位置
    int total_moves = 0;       // 移動回数

    for (int i = 0; i < q; ++i){
        char direction;   // 移動方向 ('L' または 'R')
        int target_pos;   // 移動先の位置
        cin >> direction >> target_pos;

        if (direction == 'L') {
            // 'L'の移動
            if (left > target_pos) swap(left, target_pos); // left < target_pos にする
            if (left < right && right < target_pos) {
                total_moves += (n - left + target_pos);  // ラップアラウンドが必要な場合
            } else {
                total_moves += (target_pos - left);       // 単純な移動
            }
            left = target_pos;  // 左の位置を更新
        } else {
            // 'R'の移動
            if (right > target_pos) swap(right, target_pos); // right < target_pos にする
            if (left < right && right < target_pos) {
                total_moves += (n - right + target_pos);  // ラップアラウンドが必要な場合
            } else {
                total_moves += (target_pos - right);      // 単純な移動
            }
            right = target_pos; // 右の位置を更新
        }
    }

    cout << total_moves << endl;
    return 0;
}
