#include <stdio.h>
#include <time.h>
#include "funcoes.h"

#define TAM 100000
#define IND 100 //de 10.000 em 10.000; 

struct vetor_index {
    int elemento; 
    int posicao; 
}; 

int main(){

    typedef struct vetor_index Index; 
    int vetor[TAM]; 
    Index index[IND];
    int chave = 113; 
    clock_t inicio, fim; 
    double tempo; 

  
    

        inicio = clock(); 
        carrega_vetor_ordenado(vetor,15,TAM); 

        imprime_vetor(vetor,TAM);

        vetor_index(vetor,index,IND,10000); 

        imprime_vetor(index, IND); 

    //   	if( busca_binaria (vetor, TAM, chave) ){
	// 	printf("Existe a chave %d no arquivo.\n", chave);
    //     }else{
	// 	printf("Nao existe a chave %d no arquivo.\n", chave);
    // }
    fim = clock(); 

   printf("Tempo: %lf\n", tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC);

}
