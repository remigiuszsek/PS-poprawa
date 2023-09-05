#include <stdio.h>
#include <stdlib.h>

void zamien(int **tab, int n, int m)
{
    if(n < 4)
    {
        return;
    }
    
    int *temp = tab[1];
    tab[1] = tab[n-2];
    tab[n-2] = temp;
    
    printf("---\n");
}

void wyswietlTab(int **tab, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", tab[i][j]);
        }
        
        printf("\n");
    }
}

int main()
{
    int n = 4;
    int m = 3;
    int** tab = malloc(sizeof(int*));
    
    for(int i = 0; i < n; i++)
    {
        tab[i] = malloc(sizeof(int*));
    }
    
    tab[0][0] = 1;
    tab[0][1] = 2;
    tab[0][2] = 3;
    
    tab[1][0] = 4;
    tab[1][1] = 5;
    tab[1][2] = 6;
    
    tab[2][0] = 7;
    tab[2][1] = 8;
    tab[2][2] = 9;
    
    tab[3][0] = 10;
    tab[3][1] = 11;
    tab[3][2] = 12;
    
    wyswietlTab(tab, n, m);
    
    zamien(tab, n, m);
    
    wyswietlTab(tab, n, m);

    return 0;
}
