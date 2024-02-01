#include <stdio.h>
#include <stdlib.h>
void generateSubsets(int nums[], int size) 
{
    int numSubsets = 1 << size;
    for (int i=0;i<numSubsets;i++) 
	{
        printf("[");
        int first=1;
        for (int j=0;j<size;j++) 
		{
            if(i&(1<<j)) 
			{
                if(!first) 
				{
                    printf(", ");
                }
                printf("%d", nums[j]);
                first = 0;
            }
        }
        printf("]\n");
    }
}
int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &nums[i]);
    }
    generateSubsets(nums, n);
    return 0;
}
