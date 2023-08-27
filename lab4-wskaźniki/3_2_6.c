#include <stdio.h>
#include <stdlib.h>

void foo(int n, int * w) {
    *w = n;
}

int main()
{
    int wartosc = 5;
    printf("Najpierw: %d\n", wartosc);
    foo(3, &wartosc);
    printf("Potem: %d\n", wartosc);
    
    return 0;
}
