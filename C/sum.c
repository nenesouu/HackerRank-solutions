#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv)
{
    int a;
    int b;

    float c;
    float d;

    scanf("%d %d",&a, &b);
    scanf("%f %f",&c, &d);

    printf("%d %d\n", a + b, a - b);
    printf("%f %f", c + d, c - d);
    return 0;
}