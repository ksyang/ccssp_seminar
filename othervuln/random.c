#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
//  srand(10);
  printf("%u\n", (unsigned)time(NULL));
  srand((unsigned)time(NULL));
  for(int i=0; i<10; i++){
    printf("random number: %d \n", rand()%50);
  }
}







