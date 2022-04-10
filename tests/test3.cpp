struct initd{
    int val;
    int scope;
    int value;
};

struct address{
    int name;
    int size;
};

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return b - a;
}

int main()
{
    int a = 4;
    int b = 3;
    struct initd init;
    init.val = 10;
    init.scope = 3;
    if (a < b)
    {
        int c = sum(a, b);
    }
    else
    {
        int d = sub(b, a);
    }
    return 0;
}