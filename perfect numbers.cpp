#include <stdio.h>

int main() {
  int n, i, j, sum;
  
  printf("Enter the value of n: ");
	scanf("%d",&n);
  if(n<0){
  	printf("\nInvalid input");
  }
  
  else{
  	printf("The first %d perfect numbers are:\n", n);

  i = 1;
  while(n > 0) {
    sum = 0;
    for(j=1; j<i; j++) {
      if(i%j == 0) {
        sum += j; 
      }
    }
    if(sum == i) {
      printf("%d ", i);
      n--;
    }
    i++;
  }
  }
  

  return 0;
}
