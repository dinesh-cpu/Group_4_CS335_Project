int fib(int n)
{
    int a;
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int a;
    int b;
    a = -5;
    b = fib(5);
    printf("fib: %d", b);
    return 0;
}
