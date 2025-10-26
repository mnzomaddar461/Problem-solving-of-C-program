#include <stdio.h>
#include <math.h>

int main() {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) != 2) return 0; // safety

    double division = (double)a / (double)b;

    // print exactly like checker expects
    printf("floor %lld / %lld = %.0f\n", a, b, floor(division));
    printf("ceil %lld / %lld = %.0f\n", a, b, ceil(division));
    printf("round %lld / %lld = %.0f\n", a, b, round(division));

    return 0;
}
