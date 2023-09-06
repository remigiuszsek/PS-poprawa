#include <stdio.h>
#include <stdlib.h>

int lowestSum(int **tab, int n)
{
    int lowest = tab[0][0];
    int suma = 0;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(tab[i][j] < lowest)
            {
                lowest = tab[i][j];
                suma = i + j;
            } 
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(tab[i][j] == lowest && suma > i + j)
            {
                suma = i + j;
            }
        }
    }
    
    
    return suma;
}

void wyswietlTab(int **tab, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    
    printf("---\n");
}

int main()
{
    int n = 3;
    int **tab = malloc(sizeof(int*));
    for(int i = 0; i < n; i++)
    {
        tab[i] = malloc(n * sizeof(int*));
    }
    tab[0][0] = 4;
    tab[0][1] = 4;
    tab[0][2] = 8;
    
    tab[1][0] = 6;
    tab[1][1] = 8;
    tab[1][2] = 4;
    
    tab[2][0] = 4;
    tab[2][1] = 9;
    tab[2][2] = 2;
    
    printf("Przed: \n");
    wyswietlTab(tab, n);
    
    printf("Najmniejsza suma: %d\n", lowestSum(tab, n));
    

    return 0;
}
