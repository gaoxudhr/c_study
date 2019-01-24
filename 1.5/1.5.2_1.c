#include<stdio.h>

int main()
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
    printf("%lu\n", sizeof(double));
    return 0;
}
