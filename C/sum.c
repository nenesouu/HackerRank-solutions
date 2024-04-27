#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* TASK
Your task is to take two numbers of int data type
two numbers of float data type as input and output their sum
*/

int main(int argc, char **argv)
{
    int a;
    int b;

    float c;
    float d;

    scanf("%d %d",&a, &b);
    scanf("%f %f",&c, &d);

    printf("%d %d\n", a + b, a - b);
    printf("%.1f %.1f\n", c + d, c - d);
    return 0;
}
