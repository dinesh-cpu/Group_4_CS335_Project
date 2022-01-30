int addi(int x, int y){
    int ans = x + y;
    return ans;
}

int subt(int x, int y){
    int ans = x - y;
    return ans;
}

int mult(int x, int y){
    int ans = x*y;
    return ans;
}

int fib(int n){
  if(n <= 1) return n;
  return fib(n-1) + fib(n-2);
}

int main()
{
    int a = 5;
    int b = 6, c = 7;
    int add = addi(a, b);
    int sub = subt(a, b);
    int mul = mult(b, c);
    printf("%d", add + sub + mul);
    int d = fib(7);
    return 0;
}
