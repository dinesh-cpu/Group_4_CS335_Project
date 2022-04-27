int main(){
    int a = 5;
    int b = 10;

    // normal
    if ( a == 5 ){
        int b = 5;
        printf("normal if");
    }
    else{
        printf("its still normal");
    }

    // nested
    if ( b == 10 ){
        int a = 6;
        if ( a == 6 ){
            printf ("nested 1 if");
        }
        else {
            printf ("nested 1 else");
        }
    }
    else{
        printf("nested 0 if");
    }
    
    return 0;
}