long fun_b(unsigned long x) {
    long val = 0;
    long i;
    for (i = 64; i != 0; i--) {
        val = (val << 1) | (x & 0x1);
        x >>= 1;
    }
    return val;
}

// 2. The compiler saw that the initialization of i is with the value of 64.
// Therefore, a test i != was not required.
// 3. The function computes reversal of bits in x

long func() {
    long sum = 0;
    long i=0;

    while (i<10) {
        if (i&1) goto increment;
        sum +=i;
        increment:
        i++;
    }


    return sum;
}