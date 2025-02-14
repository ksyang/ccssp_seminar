// gcc -O0 -fno-stack-protector -z execstack -no-pie -fno-pic -o bof bof.c
#include <stdio.h>

int foo(){
  char buf[40];
  printf("%p\n", buf);
  read(0, buf, 80);
  return 0;
}

int main(void){
  foo();
  return 0;
}
