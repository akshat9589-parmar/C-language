 //Generate Fibonacci Series 
         // Fibonacci series -----> third digit is sum of first and second digit

#include <stdio.h>

int main() {

    int a =0;
    int b =1;
    int next;

    int n;
    scanf("%d",&n);

    printf("0 1");

for( int i=3; i <=n; i++) {

    next = a + b;
    printf(" %d", next);
 
    a =b;
    b = next;
}

    return 0;
}