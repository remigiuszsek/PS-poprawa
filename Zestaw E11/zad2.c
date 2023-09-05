#include <stdio.h>

int findElement (int* tab, int n, int val,int (*isEqual)(int, int))
{
    int i;
    for (i = 0; i < n; i++) 
    {
        if (isEqual(tab[i], val)) 
        {
            return i;
        }
    }
    
    return -1;
}

int isEqual(int a, int b)
{
    if (a == b) 
    {
        return 1;
    }
    
    return 0;
}



int main()
{
    int tab[3] = {1, 5, 99};
    int val = 4;
    
    printf("%d\n", findElement(tab, 3, val, isEqual));
    
    return 0;
}
