double myPow(double x, int n) {
    long long N = n;   // use long long to handle INT_MIN

    if (N < 0) {
        x = 1 / x;
        N = -N;
    }

    double result = 1.0;

    while (N > 0) {
        if (N % 2 == 1) {      // if exponent is odd
            result *= x;
        }
        x *= x;                // square the base
        N /= 2;                // divide exponent by 2
    }

    return result;
}