struct first{
    int a;
    char b;
    int c;
};

struct second{
    int a;
    int b;
};

int main(){
    int a = 5;
    struct first first1;
    struct second first2;

    first1.a = 5;
    first1.b = 'c';
    first1.c = 500;

    first2.a = 10;
    first2.b = 9;

    printf("%d", a);

    return 0;
}