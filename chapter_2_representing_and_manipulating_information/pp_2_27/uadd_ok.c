#include <stdio.h>

int uadd_ok(unsigned x, unsigned y);

int main(int argc, char *argv[]) {
    unsigned a = 4294967295, b = 0, c = 1;

    printf("%u + %u = %u\n", a, b, a + b);

    printf("Unsigned numbers %u & %u %s be added.\n", a, b, uadd_ok(a, b) ? "can" : "cannot");
    printf("Unsigned numbers %u & %u %s be added.\n", a, c, uadd_ok(a, c) ? "can" : "cannot");
    printf("Unsigned numbers %u & %u %s be added.\n", b, c, uadd_ok(b, c) ? "can" : "cannot");
}

int uadd_ok(unsigned x, unsigned y) {
    return x + y >= x;
}
