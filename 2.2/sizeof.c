#include<stdio.h>

const long int a = 1234l;
int main()
{
    int i;
    printf("int size is %d\n", sizeof(int));
    printf("short size is %d\n", sizeof(short int));
    printf("long size is %d\n", sizeof(long int));
    printf("char size is %d\n", sizeof(char));
    printf("char * size is %d\n", sizeof(char *));
    printf("int * size is %d\n", sizeof(int *));
    
    long int *p = &a;
    printf("%ld\n", *p);
    for(i = 0; i < 1; i++)
    {
        printf("%d\n", p[i]);
    }
    printf("%ld\n", a);
}
