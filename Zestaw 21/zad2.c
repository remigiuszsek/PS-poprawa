#include <stdio.h>
#include <stdlib.h>

int foo(int tab[], int tab2[], int n)
{
    int zlicz1 = 0;
    int zlicz2 = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(tab[i] % 2 != 0)
        {
            zlicz1++;
        }
        
        if(tab2[i] % 2 != 0)
        {
            zlicz2++;
        }
    }
    
    if(zlicz1 == zlicz2)
    {
        return 1;
    }
    
    return 0;
}

int main()
{
    int tab[] = {1, 2, 3, 4, 4};
    int tab1[] = {4, 5, 4, 3, 1};
    
    printf("%d\n", foo(tab, tab1, 5));

    return 0;
}
