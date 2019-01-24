#include<stdio.h>

#define MIN(A, B) ((A) <= (B)? (A):(B))

int main()
{
    int c = MIN(5,1);
    printf("%d\n", c);
    return 0;
}
