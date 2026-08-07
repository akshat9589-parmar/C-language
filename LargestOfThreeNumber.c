// Check which number is greater among three of the number 

#include <stdio.h>

int main() {

    int a;
    int b;
    int c;

    scanf("%d",&a);
     scanf("%d",&b);
      scanf("%d",&c);

      printf("a: %d\n"a);
       printf("b: %d\n"b);
        printf("c: %d\n"c);


  if(a > b && a > c) {
    printf("a");
  }      
  else if(b > a && b > C) {
    printf("b");
  }
else{
    printf("c");
}

    return 0;
}