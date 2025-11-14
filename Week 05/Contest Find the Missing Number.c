#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    long long result, a, b, c, d;

    for (int i = 1; i <= t; i++) {

        scanf("%lld %lld %lld %lld", &result, &a, &b, &c);

        long long multi = a * b * c;

        // Special case: multiplication = 0
        if (multi == 0) {
            if (result == 0)
                printf("0\n");  // 0/0 case → defined output depending on problem
            else
                printf("-1\n");
            continue;
        }

        if (result % multi != 0) {
            printf("-1\n");
        } else {
            d = result / multi;
            printf("%lld\n", d);
        }
    }

    return 0;
}
