#include <stdio.h>

int main() {
    int num1, num2, num3;

    print("Enter First Number: ");
    scanf("%d", &num1);
    
    print("Enter Second Number: ");
    scanf("%d", &num2);

    print("Enter Third Number: ");
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3) {
        if (num2 >= num3) {
            printf("Second Largest Number 
            is %d/n" , num2);
         } else {
            printf("Second Largest Number is %d/n" , num3);
        }
    } else if (num2 >= num1 && num2 >=num3
            ) {
        if (num1 >= num3) {
           printf("Second Largest Number 
            is %d/n" , num1);
        } else {
            printf("Second Largest Number is %d/n" , num3);
        }
    }
    }   else {
        if (num1 >= num2) {
            printf(Second Largest Number 
            is %d/n", num 1);
        } else {
        if (num1 >= num2) {
            printf(Second Largest Number is %d/n", num 2); 
        }
        return 0;
   }

