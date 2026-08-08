// Print multiplication table 

#include <stdio.h>

int  main() {

int n;

  scanf("%d",&n);
  printf("%d",n);

  int next = n;

  for( int i = 1; i <= 10; i++) {

    printf("Table: %d\n",next);

    next = next + n;

  }

    return 0;
}