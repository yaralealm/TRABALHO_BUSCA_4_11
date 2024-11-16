#include <stdio.h>
#include <time.h>
#include "funcoes.h"

#define TAM 1000000
#define TAM2 1000 //de 1000 em 1000 


int main(){

    int vetor[TAM]; 
    Index ind[TAM2]; 
    int chave = 113; 
    clock_t inicio, fim; 
    double tempo; 
  

    inicio = clock(); 
    carrega_vetor_ordenado(vetor, 1, TAM); 
    
    vetor_index_struct(vetor, ind, TAM, TAM2);
    
    int pos = busca_binaria(vetor,ind,TAM,TAM2,chave); 
    


   if(pos == -1){
       printf("Chave não encontrada no vetor :(\n"); 
   }else{
       printf("Chave encontrada na posição %d.\n", pos); 
   }
    fim = clock(); 

   printf("Tempo: %lf\n", tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC);

}
