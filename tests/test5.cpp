
int main(){
  int *ptr;
  int **ptr1;
  string str = "hello world";
  int a = str.length();
  string temp;
  strcpy(temp, str);
  
  int b = pow(2,3);
  float c = sqrt(2);
  int d = max(9, 3);
  int *arr = new int(10);
  for(int i = 0; i<10; i++){
    arr[i] = i;
  }
  delete arr;
  return 0;
}
