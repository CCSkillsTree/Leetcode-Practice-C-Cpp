#include <stdlib.h>
#include <stdio.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                int *result = (int *)malloc(sizeof(int) * 2);
                if (result == NULL)
                {
                    *returnSize = 0;
                    return NULL;
                }
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main()
{
    int ArraySize;
    printf("Please enter the input array size=");
    scanf("%d", &ArraySize);
    int num[ArraySize];
    printf("Please enter the array number and press ENTER \n");
    for (int i = 0; i < ArraySize; i++)
        scanf("%d", &num[i]);

    // Test case int num[4] = {2, 7, 11, 15};
    int size = 0;
    int *p = twoSum(num, 4, 9, &size);
    printf("Return Array:\n");
    for (int i = 0; i < size; ++i)
    {
        printf("%d\n", p[i]);
    }
}