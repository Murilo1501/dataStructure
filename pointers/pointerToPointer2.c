#include<stdio.h>

int main(void)
{

    float z = 2.5;
    float *fp;

    fp = &z;

    printf("*&z = %f",*&z);
    printf("*fp = %f",*fp);
    printf("**&z = %f",**&fp);
    return 0;
}

 