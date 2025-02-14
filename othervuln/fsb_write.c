// gcc -o fsb_write fsb_write.c

#include <stdio.h>

int secret;

int main() {
  char format[0x100];

  printf("Address of `secret`: %p\n", &secret);
  printf("Format: ");
  scanf("%s", format);
  printf(format);
  
  printf("Secret: %d", secret);

  return 0;
}
