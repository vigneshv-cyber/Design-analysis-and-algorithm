#include <stdio.h>

void printList(int arr[], int n){
  for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int insert(int arr[], int n, int x, int pos){
  int i;
  
  for(i=n; i>=pos; i--){
    arr[i] = arr[i-1];
  }
  arr[pos-1] = x;

  return n+1; 
}

int main(){
  int n, i;
  printf("Enter size of array: ");
  scanf("%d", &n);
  
  int arr[n];
  printf("Enter elements: ");
  for(i=0; i<n; i++){
    scanf("%d", &arr[i]); 
  }

  int x, pos;
  printf("Enter element to insert: ");
  scanf("%d", &x);
  printf("Enter position: ");
  scanf("%d", &pos);

  printf("Array before insertion: ");
  printList(arr, n);
  
  n = insert(arr, n, x, pos);
  
  printf("Array after insertion: ");
  printList(arr, n);

  return 0;
}
