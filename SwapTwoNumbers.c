// Swap two numbers

#include <stdio.h>
 
int main() {

    int a;
    int b;

    scanf("%d",&a);
     scanf("%d",&b);

     printf("a: %d",a);
     printf("b: %d",b);


int temp;

temp = a;
a = b;
b = temp;
   
 // Printing Swaped values 

      printf("a: %d",a);
      printf("b: %d",b);

    return 0;


}