#include <stdio.h>
#include <time.h>
#include "funcoes.h"

#define TAM 100

int main()
{
    int vetor[TAM]; 
    int chave = 113; 
    clock_t inicio, fim; 
    double tempo; 

        inicio = clock(); 
        carrega_vetor_ordenado(vetor,15,TAM); 

        imprime_vetor(vetor,TAM);

    	if( busca_binaria(vetor, TAM, chave) ){
		printf("Existe a chave %d no arquivo.\n", chave);
        }else{
		printf("Não existe a chave %d no arquivo.\n", chave);
    }
    fim = clock(); 

   printf("Tempo: %lf\n", tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC);

}
