#include <stdio.h>

int foo (int* a, int* b) {
    if (*a < *b) {
        return *a;
    }   
    
    return *b;
}

int main()
{
    int a = 5;
    int b = 3;
    
    printf("%d\n", foo(&a, &b));
    
    return 0;
}
