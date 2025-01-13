#include <stdio.h>

int main(){
  char name[20];
  printf("What is your name" );
  scanf("%s", name);
  printf("Hello, %s from c\n", name);

  int age;
  printf("What is your age" );
  scanf("%d", &age);
  printf("Your name is %s and you are %d years old \n", name, age);
  
  return (0);

}

