#include<stdio.h>

char a[5] = {'h','e','l','l','o'};
char b[6] = {'h','e','l','l','o','\0'};
char c[5] = "hello";
int main()
{
    printf("a is %s\n",a);
    printf("b is %s\n",b);
    printf("c is %s\n",c);
    return 0;
}
