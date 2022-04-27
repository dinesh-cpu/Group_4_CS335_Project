int normalfunc(int a, int b){
    int temp1 = a - b;
    int temp2 = a + b;
    return temp1 + temp2;
}

int recfunc(int n){
    int ans;
    if (n <= 1){
        return 1;
    }
    ans = recfunc(n - 1) + recfunc(n - 2);
    return ans;   
}

int main(){

    int a = 5;
    int b = 10;
    int c = normalfunc(a , b);
    int d = normalfunc(4, 6);
    int e = recfunc(a);
    int f = recfunc(9);

    return 0;
}