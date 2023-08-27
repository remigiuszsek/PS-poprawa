#include <stdio.h>
#include <stdlib.h>

void foo(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 5;
    int b = 8;
    
    foo(&a, &b);
    printf("Obecnie: a = %d, b = %d", a, b);
    return 0;
}
