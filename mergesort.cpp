#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
void sortedMerge(int a[], int b[], int res[], int n, int m) 
{ 
    int i = 0, j = 0, k = 0; 
    while (i < n) { 
        res[k] = a[i]; 
        i += 1; 
        k += 1; 
    } 
    while (j < m) { 
        res[k] = b[j]; 
        j += 1; 
        k += 1; 
    }  
    qsort(res, n + m, sizeof(int), compare); 
} 
int main() 
{ 
    int n, m;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &m);
    int b[m];
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    int res[n + m]; 
    sortedMerge(a, b, res, n, m); 

    printf("Sorted merged list:");
    for (int i = 0; i < n + m; i++) 
        printf(" %d", res[i]); 
    printf("\n"); 

    return 0; 
}
