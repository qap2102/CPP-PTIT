#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const long long MAXN = 10000000;  // Tối đa sàng tới 10^7
vector<long long> primes;

// Sàng Eratosthenes để tìm tất cả các số nguyên tố <= sqrt(10^14)
void sieve() {
    vector<bool> is_prime(MAXN + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (long long i = 2; i <= MAXN; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (long long j = i * i; j <= MAXN; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

void factorize(long long N) {
    for (long long prime : primes) {
        if (prime * prime > N) break;  // Nếu số nguyên tố lớn hơn sqrt(N), thoát
        int count = 0;
        while (N % prime == 0) {
            N /= prime;
            ++count;
        }
        if (count > 0) {
            cout << prime << " " << count << endl;
        }
    }
    
    // Nếu còn số lớn hơn 1 thì đó là số nguyên tố lớn
    if (N > 1) {
        cout << N << " 1" << endl;
    }
}

int main() {
    sieve();  // Tiền xử lý sàng Eratosthenes để lấy danh sách các số nguyên tố

    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        factorize(N);
        cout << endl;  // Xuống dòng sau mỗi bộ test
    }
    return 0;
}
// nguồn của thầy Nguyễn Hữu Anh Tài :)))