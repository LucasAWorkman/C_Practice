#include <stdio.h>

int main(){
  int a = 5;

  printf("a in memeory is stored at: %p \n", &a);
  
  int* aa = &a;

  printf("value at aa: %p \n", aa);
  printf("value of aa: %d \n", *aa);

  
  for (int i = 0; i < 10; i++){
	  printf("current index %d \n", i);
  }
  return 0;

 }
