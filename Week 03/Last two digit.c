#include <stdio.h>
int main() {
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long int mod = 100;
    long long int result = ((a % mod) * (b % mod)) % mod;
    result = (result * (c % mod)) % mod;
    result = (result * (d % mod)) % mod;

    // দুই ডিজিটে প্রিন্ট করবো, leading zero সহ
    printf("%02lld\n", result);
    return 0;
}
