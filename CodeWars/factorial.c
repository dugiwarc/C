int factorial(int n)
{
        return n == 0 ? 1 : n < 0 || n > 12 ? -1 : factorial(n - 1) * n;
}