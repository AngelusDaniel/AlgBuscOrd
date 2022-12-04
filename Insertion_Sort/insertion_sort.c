#include <stdio.h>

//algoritmo insertion sort

void insertion_sort(int vet[], int tam);

int main()
{
  int vet[] = {4,5,3,2,6,7,1,8,9,10};
  insertion_sort(vet, 8);
  for (int i = 0; i < 10; i++)
    printf("vetor[%d] = %d\n", i, vet[i]);

  return 0;
}

void insertion_sort(int vet[], int tam)
{
  
  for (int i = 1; i < tam; i++)
  {
    
    int a = vet[i];
    int j = i - 1;
    while (j >= 0 && vet[j] > a)
    {
      vet[j + 1] = vet[j];
      j = j - 1;
    }
    vet[j + 1] = a;
  }
}