#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool isArmstrong(int num) 
{
    int originalNum = num;
    int sum = 0;
    int numDigits = 0;
    while (num > 0)
	 {
        num /= 10;
        numDigits++;
    }
    num = originalNum;
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }
    return sum == originalNum;
}
int main() {
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    if (num < 0) {
        printf("Negative numbers are not considered.\n");
        return 1;
    }
    if (isArmstrong(num) == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}
