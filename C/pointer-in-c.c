#include <stdio.h>

void update(int *a, int *b)
{
    int buf = *a;
    
    *a = *a + *b;
    if (buf - *b >= 0) {
        *b = buf - *b;
    } else {
        *b = *b - buf;
    }
}

int main(void)
{
    int a;
    int b;
    int *pa = &a;
    int *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}