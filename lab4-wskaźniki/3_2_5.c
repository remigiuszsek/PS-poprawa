#include <stdio.h>
#include <stdlib.h>

int foo(int const * a, int const * b) {
    return *a + *b;
}

int main()
{
    int a = 5;
    int b = 4;
    
    
    printf("Suma a i b wynosi: %d", foo(&a, &b));
    return 0;
}
