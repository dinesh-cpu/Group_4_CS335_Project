int main(){

    // normal for
    int a = 0;
    int b = 0;
    int n = 10;
    for(a = 0; a < n; a++){
        a = a + 2;
    }

    // nested for
    for( b = 0; b < 10; b++){
        int c = 0;
        for(c = 0; c < 10 ; c++){
            c = c + 2;
        }
        b = b + 2;
    }

    // while -> for
    while ( b < 10){
        for ( a = 0; a < 10 ; a++){
            n = n * 2;
        }
        b++;
    }

    // for -> while
    for (a = 0; a < 10; a++){
        while ( b < 10 ){
            b++;
        }
        b -= 2;
    }

    return 0;
}