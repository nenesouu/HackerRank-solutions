#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int n; 
    int sum = 0;

    scanf("%d", &n);
    while(n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("%d\n", sum);
    return 0;
}
