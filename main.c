#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char c;
  printf("input a character : ");
  scanf("%c", &c);
  
  printf("the next character of %c is %c\n", c, c+1);
  
  system("PAUSE");	
  return 0;
}
