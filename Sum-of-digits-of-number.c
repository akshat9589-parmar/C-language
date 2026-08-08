// Sum of digits of number 
#include <stdio.h>

int main() {

    int n = 1234;

    

    int Firstdigit = 1234 % 10;
    n = 123;

     int Seconddigit = 123 % 10;
    n = 12;

    
     int Thirddigit = 12 % 10;
    n = 1;

    
     int Fourthdigit = 1 % 10;
    

    int sum = Firstdigit + Seconddigit + Thirddigit + Fourthdigit;
    
    printf("Sum %d",sum);
    
    

    return 0;
}