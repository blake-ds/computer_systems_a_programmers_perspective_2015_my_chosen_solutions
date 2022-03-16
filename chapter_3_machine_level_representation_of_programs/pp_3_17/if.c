long lt_cnt = 0;
long ge_cnt = 0;

long absdiff_se(long x, long y) {
    long result;
    int test_expression = x < y;
    if (test_expression) goto true;
    ge_cnt++;
    result = x - y;
    goto done;
    true:
    lt_cnt++;
    result = y - x;
    done:
    return result;
}