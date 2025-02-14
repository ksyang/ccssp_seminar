// gcc -O0 -z execstack -no-pie -fno-pic -o canary canary.c
#include <stdio.h>

int main(void){
  char a[16];

  scanf("%s", a);
  printf("%s\n", a);
  return 0;
}
