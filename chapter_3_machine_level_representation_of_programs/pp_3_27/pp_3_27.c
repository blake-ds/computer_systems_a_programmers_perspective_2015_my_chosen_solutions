long fact_for_while_loop(long n) {
    long i = 2;
    long result = 1;
    while (i <= n) {
        result *= i;
        i++;
    }
    return result;
}

long fact_for_guarded_do(long n) {
    long i = 2;
    long result = 1;
    long test_expression = i <= 2;
    if (!test_expression)
        goto done;

    loop:
    result *= i;
    i++;
    test_expression = i <= 2;
    if (test_expression)
        goto loop;

    done:
    return result;
}