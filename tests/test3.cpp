struct marks{
  int maths;
  int physics;
  int maths;
  int science;
  int a[10];
};

int main(){
  struct marks rohan;
  rohan.maths = 70;
  rohan.physics = 90;
  rohan.maths = 100;
  rohan.science = 80;
  for(int i = 0; i<10; i++){
    rohan.a[i] = 2*i+1;
  }
  return 0;
}