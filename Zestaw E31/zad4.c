#include <stdio.h>
#include <stdlib.h>

struct element {
  float x;
  struct element * next;
};

float sumaKwadratow(struct element * lista1, struct element * lista2)
{
    float suma = 0;
    while(lista1->next != NULL)
    {
        lista1 = lista1->next;
        suma += lista1->x * lista1->x;
        printf("Suma: %f\n", suma);
    }
    
    while(lista2->next != NULL)
    {
        lista2 = lista2->next;
        suma += lista2->x * lista2->x;
        printf("Suma: %f\n", suma);
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
   
   float sumaKw = sumaKwadratow(lista1, lista2);
   
   printf("%f", sumaKw);
   // Powinno być 4 + 9 + 25 = 38. Sprawdźmy...
   free(lista1->next->next);
   free(lista1->next);
   free(lista1);
   
   free(lista2->next);
   free(lista2);

    return 0;
}
