struct test{
    int a;
};

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
    int c;
    c = 10;
    a = -5;
    b = fib(5);
    printf("fib: %d", b);
    for(c = 0; c < 10; c++){
        int z = fib(c);
    }
    c++;
    ++c;
    return 0;
}
