int main(){
  int a = 5 + 2;
  float a = 5 + 2.0;
  int b = 5-2;
  int c = 34*23;
  int d = 9090/32;
  a++;
  a--;
  int e;
  scanf("%d",  &e);
  if( a == 7){
    printf("equal comparison\n");
    if(1){
      printf("nested if\n");
    }
  } 
  if( a <= 10) printf("less than comparison'n");
  if( (a==5) || (a=7)) printf("or\n");
  int e = 2 >> 1;
  return 0;
}