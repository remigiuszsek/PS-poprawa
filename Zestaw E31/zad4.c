#include <stdio.h>
#include <stdlib.h>

struct element {
  float x;
  struct element * next;
};

int sumaKwadratow(struct element * lista1, struct element * lista2)
{
    int suma = 0;
    while(lista1->next != NULL)
    {
        suma += lista1->next->x * lista1->next->x;
        printf("Suma: %d\n", suma);
        
        lista1 = lista1->next;
    }
    
    while(lista2->next != NULL)
    {
        suma += lista2->next->x * lista2->next->x;
        printf("Suma: %d\n", suma);
        
        lista2 = lista2->next;
    }
    return suma;
}

int main()
{
   struct element * lista1 = malloc(sizeof(struct element));
   struct element * lista2 = malloc(sizeof(struct element));
   
   lista1->next = malloc(sizeof(struct element));
   lista1->next->x = 2;
   lista1->next->next = malloc(sizeof(struct element));
   lista1->next->next->x = 3;
   lista1->next->next->next = NULL;
   
   lista2->next = malloc(sizeof(struct element));
   lista2->next->x = 5;
   lista2->next->next = NULL;
   
   int sumaKw = sumaKwadratow(lista1, lista2);
   
   printf("%d", sumaKw);
   // Powinno być 4 + 9 + 25 = 38. Sprawdźmy...
   free(lista1->next->next);
   free(lista1->next);
   free(lista1);
   
   free(lista2->next);
   free(lista2);

    return 0;
}
