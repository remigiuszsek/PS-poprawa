#include <stdio.h>
#include <stdlib.h>

void foo(int* a, int* b) {
    if (*b < *a) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main()
{
    int a = 5;
    int b = 4;
    
    foo(&a, &b);
    printf("Obecnie: a = %d, b = %d", a, b);
    return 0;
}
