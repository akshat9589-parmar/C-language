

     // Method 1
// Reverse the Number  -------> this is for 4 digit number


#include <stdio.h>

int main() {

  int a;
    scanf("%d",&a);
    printf("%d",a);

    // Let the number is 1234 -----> 4321

    int firstDigit = a % 10;
    a = a / 10;

    int secondDigit = a % 10;
    a = a / 10;

    int thirdDigit = a % 10;
    a = a / 10;

    int fourthDigit = a % 10;
    a = a / 10;

 printf("Reverse number is: %d%d%d%d", firstDigit,secondDigit,thirdDigit,fourthDigit);
    

    
    return 0;
}

 // Method 2
// Reverse the number for n digits number 

#include <stdio.h>

int main() {

    int reverse =0;
 int n;
    scanf("%d",&n);
    printf("%d",n);

    while( n > 0) {
  
            int digit = n % 10;
            reverse = reverse * 10 + digit;

            n = n/10;

    }

    printf("Reverse number is: %d",reverse);


    return 0;
}