#include <stdio.h>

int isDivisibleBy7(int num) {
   
    while (num >= 10) {
        int last_digit = num % 10;  
        num = num / 10 + last_digit * 5;  
    }
       return num % 7 == 0;
}

int main() {
    int number;

    printf("Enter number which divide to 7: ");
    scanf("%d", &number);

    if (isDivisibleBy7(number)) {
        printf("Number %d divide to 7.\n", number);
    } else {
        printf("Number %d cant divide to 7.\n", number);
    }

    return 0;
}

