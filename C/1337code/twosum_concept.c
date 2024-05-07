#include <stdio.h>

int main() {
  int i;
  int j;
  int test;
  int test2;
  int target = 8;
  int targeti = 0;
  int targetj = 0;

  for (i = 0; i <= 5; i++) {
   printf("\ni set to value: ");
   printf("%d\n", i);
   test = i;
   printf("\nTest set to value: ");
   printf("%d\n", test);
    for (j=0; j <= 5; j++) {
    printf("\nj set to value: ");
    printf("%d", j);
    test2 = (test + j);
    printf("\ntest2 set to value: ");
    printf("%d\n", test2);
    if (test2 == target) {
      targeti = i;
      targetj = j;
      printf("\n!!!i and j saved!!!\n");
      }
    }
  }
  
  printf("%d", targeti);
  printf(" + ");
  printf("%d", targetj);
  printf(" = ");
  printf("%d", target);
  
  return 0;
}
