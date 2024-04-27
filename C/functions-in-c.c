#include <stdio.h>
#include <stdlib.h>

/* Task
Write a function int max_of_four(int a, int b, int c, int d) which reads four
arguments and returns the greatest of them.
*/

int max_of_four(int a, int b, int c, int d)
{
    int result = b;

    if (a > result)
        result = a;
    if (b > result)
        result = b;
    if (c > result)
        result = c;
    if (d > result)
        result = d;
    return result;

}

int main(void)
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}