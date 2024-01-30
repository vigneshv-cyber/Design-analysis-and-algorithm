#include <stdio.h>
#include <stdlib.h>

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    return reversedNum;
}

int main() {
	int n;
	printf("Enter the number --> ");
	if(scanf("%d",&n)){
		int reversedNum = reverseNumber(n);
		printf("Reverse of %d is: %d\n", n, reversedNum);
	}
	else{
		printf("Invalid!");
	}
    return 0;
}
