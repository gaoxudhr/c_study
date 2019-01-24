#include<stdio.h>
#include<string.h>
int main()
{
    char a[6] = {'a','b','c','d','e'};
    char *b = "abcde";
    int  c[6] = {1,2,3,4,5};
    printf("a sizeof is %d; a strlen is %d\n",sizeof(a),strlen(a));
    printf("b sizeof is %d; b strlen is %d\n",sizeof(b),strlen(b));
    printf("c sizeof is %d; c strlen is %d\n",sizeof(c),strlen(c));
}
