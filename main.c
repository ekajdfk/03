#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float a, b;
  
  printf("input a number : ");
  scanf("%f", &a);
  
  printf("input a number : ");
  scanf("%f", &b);
  
  printf("%f\n", a/b);
   
  system("PAUSE");	
  return 0;
}
