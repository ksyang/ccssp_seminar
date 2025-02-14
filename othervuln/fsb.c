// gcc -o fsb fsb.c

#include <stdio.h>

int main() {
  char format[0x100];

  setbuf(stdout, NULL);
  
  printf("Format: ");
  scanf("%s", format);
  printf(format);
  return 0;
}
