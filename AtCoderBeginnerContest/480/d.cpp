#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

/* Reference: https://github.com/FFlushhh/competitive-programming/blob/main/.vscode/cpp.code-snippets */
/* 汎用デバッグプリンタの補助concept・関数群を定義する */
/// @brief std::beginとstd::endを使用できる型か判定するconcept
template <class T>
concept DebugIterable = requires(const T& value) {
    std::begin(value);
    std::end(value);
};

/// @brief 型がstd::stringであるか判定するconcept
template <class T>
concept DebugString =
    std::same_as<std::remove_cvref_t<T>, std::string>;

template <class T>
void debug_print_value(const T& value);

template <class First, class Second>
void debug_print_value(const pair<First, Second>& value);

template <class... Ts>
void debug_print_value(const tuple<Ts...>& value);

/// @brief pairを丸括弧付きで再帰的に出力する
/// @tparam First pairの第1要素の型
/// @tparam Second pairの第2要素の型
/// @param[in] value 出力するpair
template <class First, class Second>
void debug_print_value(const pair<First, Second>& value)
{
    cerr << '(';
    debug_print_value(value.first);
    cerr << ", ";
    debug_print_value(value.second);
    cerr << ')';
}

/// @brief tupleを丸括弧付きで再帰的に出力する
/// @tparam Ts tupleを構成する各要素の型
/// @param[in] value 出力するtuple
template <class... Ts>
void debug_print_value(const tuple<Ts...>& value)
{
    cerr << '(';

    size_t index = 0;
    apply(
        [&](const auto&... elements) {
            ((cerr << (index++ == 0 ? "" : ", "),
              debug_print_value(elements)), ...);
        },
        value);

    cerr << ')';
}

/// @brief 単一値またはネストされたコンテナの1要素を再帰的に出力する
/// @details std::stringは文字列として出力し、それ以外の反復可能な型は角括弧付きで各要素を再帰的に出力する
/// @tparam T 出力対象の型
/// @param[in] value 出力する値
template <class T>
void debug_print_value(const T& value)
{
    if constexpr (DebugString<T>) {
        cerr << value;
    } else if constexpr (DebugIterable<T>) {
        cerr << '[';

        bool first = true;

        for (const auto& element : value) {
            if (!first) {
                cerr << ", ";
            }

            debug_print_value(element);
            first = false;
        }

        cerr << ']';
    } else {
        cerr << value;
    }
}

/// @brief 値またはコンテナを標準エラー出力へ1行で表示する
/// @details 最上位のコンテナは要素を空白区切りで出力し、最後に改行する
/// @tparam T 出力対象の型
/// @param[in] value 出力する値またはコンテナ
template <class T>
void debug_print(const T& value)
{
    if constexpr (DebugString<T>) {
        for (size_t i = 0; i < value.size(); ++i) {
            if (i > 0) {
                cerr << ' ';
            }

            debug_print_value(value[i]);
        }
    } else if constexpr (DebugIterable<T>) {
        bool first = true;

        for (const auto& element : value) {
            if (!first) {
                cerr << ' ';
            }

            debug_print_value(element);
            first = false;
        }
    } else {
        debug_print_value(value);
    }

    cerr << '\n';
}

/*
[debug_print]

使い方:
    int x = 42;
    debug_print(x);
    // 42

    vector<int> v = {10, 20, 30};
    debug_print(v);
    // 10 20 30

    int a[] = {1, 2, 3};
    debug_print(a);
    // 1 2 3

    string s = "abc";
    debug_print(s);
    // a b c

    pair<int, int> p = {1, 2};
    debug_print(p);
    // (1, 2)

    tuple<int, string, double> t = {1, "abc", 2.5};
    debug_print(t);
    // (1, abc, 2.5)

    vector<vector<int>> vv = {
        {1, 2, 3},
        {4, 5, 6}
    };
    debug_print(vv);
    // [1, 2, 3] [4, 5, 6]

    map<int, vector<int>> mp = {
        {1, {10, 20}},
        {2, {30, 40}}
    };
    debug_print(mp);
    // (1, [10, 20]) (2, [30, 40])

対応:
    - int / long long / double / charなどの単一値
    - operator<<でcerrへ出力できる型
    - string
    - pair / tuple
    - C配列
    - array / vector / deque / list
    - set / multiset / unordered_set
    - map / multimap / unordered_map
    - 上記を任意にネストした型

注意:
    C++20以降を想定する。
    unordered_set / unordered_mapの出力順は保証されない。
    queue / stack / priority_queueなどのコンテナアダプタには対応しない。

時間計算量:
    単一値: O(1) ※値自体の出力コストを除く。
    コンテナ・pair・tuple: O(E)
    Eは再帰的に出力される全要素数。

空間計算量:
    単一値: O(1)
    コンテナ・pair・tuple: O(D)
    Dはpair・tuple・コンテナの最大ネスト深さ。
*/


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    vector<ll> sum(n + 1);
    vector<ll> elementSum(n + 1);
    rep(i, n) sum[i + 1] = sum[i] + a[i];
    
    rep(i, n) {
        elementSum[i + 1] = elementSum[i] + (i + 1);
    }

    debug_print(sum);
    debug_print(elementSum);

    while (q--) {
        ll l, r;
        cin >> l >> r;

        // 参考 : https://kou.benesse.co.jp/nigate/math/a15m0075.html
        ll kl = ceil((float)(-1  + sqrt(8 * l + 1) / 2));
        ll kr = ceil((float)(-1  + sqrt(8 * r + 1) / 2));

        cout << "kl : kr" << endl;
        cout << kl << " " << kr << endl;
        ll suffixL = (kl - 1) * kl / 2;
        ll suffixR = (kr - 1) * kr / 2;

    }

    return 0;
}

/*
累積和を考える
a1, a1, a2, a1, a2, a3, a1, a2, a3, a4, ...

lとrはどこに位置するか

*/