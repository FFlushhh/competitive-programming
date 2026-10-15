#include <vector>

/* FFlush's Library 2026.9.15
 *
 * エラトステネスの篩
 * 0 以上 n 以下の素数をすべて昇順で列挙する
 *
 * 使い方:
 *   std::vector<long long> primes = SieveOfEratosthenes(100);
 *
 * 例:
 *   primes = {2, 3, 5, 7, 11, ..., 97}
 *
 * 時間計算量:
 *   O(n log log n)
 *
 * 空間計算量:
 *   O(n)
 */
std::vector<long long> SieveOfEratosthenes(long long n)
{
    if (n < 2) {
        return {};
    }

    std::vector<bool> isPrime(n + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;

    for (long long p = 2; p * p <= n; ++p) {
        if (!isPrime[p]) {
            continue;
        }

        // p^2 未満の p の倍数は、より小さい素数ですでに除外済み
        for (long long multiple = p * p; multiple <= n; multiple += p) {
            isPrime[multiple] = false;
        }
    }

    std::vector<long long> primes;

    for (long long x = 2; x <= n; ++x) {
        if (isPrime[x]) {
            primes.push_back(x);
        }
    }

    return primes;
}