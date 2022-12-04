#include <stdio.h>
//Algoritimo Selection Sort

//O vet[] é percorrido, passando o maior
//valor para vet[0], depois o segundo
//maior para vet[1], e assim por diante.
int main()
{
  int vet[] = {5, 9, 7, 6, 4, 0, 2, 3, 8, 1};
  int tam = 10;
  
  for (int i = 0; i < tam - 1; i++)
  {
    int pos = i;
    for (int j = i + 1; j < tam; j++)
      if (vet[j] > vet[pos]) pos = j;
      
    if (pos != i)
    {
      int t = vet[i];
      vet[i] = vet[pos];
      vet[pos] = t;
    }
  }
  
  for (int i = 0; i < tam; i++)
    printf("vetor[%d] = %d\n", i, vet[i]);
  
  return 0;
}
