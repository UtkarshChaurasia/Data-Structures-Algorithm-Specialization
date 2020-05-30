/*Task. Given two integers n and m, output Fn mod m (that is, the remainder of Fn when divided by m).

Input Format. The input consists of two integers n and m given on the same line (separated by a space).

Constraints. 1<=n<=10^14, 2<=m<=10^3.

Output Format. Output Fn mod m.*/


#include <iostream>

long long get_pisano_period(long long m) {
    long long a = 0, b = 1, c = a + b;
    for (int i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1) return i + 1;
    }
}

long long get_fibonacci_huge(long long n, long long m) {
    long long remainder = n % get_pisano_period(m);

    long long first = 0;
    long long second = 1;

    long long res = remainder;

    for (int i = 1; i < remainder; i++) {
        res = (first + second) % m;
        first = second;
        second = res;
    }

    return res % m;
}

int main() {
//    for (int i = 2; i < 100; i++) {
//        std::cout << i << " : " << get_pisano_period(i) << std::endl;
//    }
//    return 0;
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge(n, m) << '\n';
}
