#include<stdio.h>
#include<math.h>
// int main(){
//     int a = 4;
//     int b = 8;
//     int z;
//     b =  b * z; // legal
//        // b * a =z;   // illegal
//     printf("The value of z is: %d\n", z);
//     printf("The value of a + b is: %d\n", a + b);
//     printf("The value of a - b is: %d\n", a - b);
//     printf("The value of a * b is: %d\n", a * b);
//     printf("The value of a / b is: %d\n", a / b);
   
    printf("5 when divided by 2 leaves a remainder of %d\n", 5%2);
     
     // No operator is assumed to be present 
     //printf("The value of 4 * 5 is %d\n", (4)(5)); --> Will not return 20/ wrong!!
     printf("The value of 4 * 5 is %d\n", (4)*(5));

     // There is no operater to perform exponentiation in C
      printf("The value of 4 ^ 5 is %d\n", 4^5); //--> will not produce 4 to the power 5
      printf("The value of 4 to the power 5 is %f\n", pow(2,5));
   
    return 0;

} 