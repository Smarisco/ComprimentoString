#include <stdio.h>
#define MAX 50

int main(void) {
  char palavra[MAX];
  int n;
  scanf("%s", palavra);
  n = 0;
    while (palavra[n] != '\0')
    n++;
    printf("%d \n", n);



  return 0;
}
