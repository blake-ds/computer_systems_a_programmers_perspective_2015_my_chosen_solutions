#include <stdio.h>

int fact_do_goto(int n) {
    int result = 1;
    loop:
    result *= n;
    n = n - 1;
    if (n > 1)
        goto loop;
    return result;
}

int main() {
    printf("The last factorial that doesn't overflow is: %d\n", fact_do_goto(13));
}