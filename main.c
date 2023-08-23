#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
    int len;
    int len2;

     len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
     _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    return (0);
}
