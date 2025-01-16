#include <stdio.h>

int main(){
  
  int a = 5;

  printf("Pointer value of a is : %p \n", &a);

  char username[6] = "Lucas";

  for(int i = 0; i < 5; i++)
  {
	  printf("each char in the array %d, \n", username[i]);
  }
  return 0;
}
