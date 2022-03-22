#include <stdlib.h>
#include <stdio.h>
#define INT_MAX 2147483647
int reverse(int x)
{
    int ans = 0;
    while (x != 0)
    {
        if (abs(ans) > INT_MAX / 10)
            return 0;
        ans = ans * 10 + x % 10;
        x = x / 10;
    }
    return ans;
}

int main()
{
    int Num;
    printf("Please enter the Number=");
    scanf("%d", &Num);
    int Output = reverse(Num);

    printf("Return Reverse Result:\n");
    printf("%d", Output);

    return 0;
}
