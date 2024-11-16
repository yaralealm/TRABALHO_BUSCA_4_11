#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include "funcoes.h"
#include <stdlib.h>


#define TAM 1000000
#define TAM2 1000 //de 1000 em 1000 


void carrega_vetor_ordenado(int colecao[], int valor_inicial, int tamanho){
	int i;
	srand( (unsigned) time(NULL) );
	for(colecao[0] = valor_inicial, i=1; i<tamanho; i++){
		colecao[i] = colecao[i-1] + (rand() % 10);
	}
}

void imprime_vetor(int colecao[], int tamanho){
	int i=0;
	for(i=0; i < tamanho; i++){
		printf("Vetor[%d] = %d\n, ",i, colecao[i]);
	}
	printf("\n");
}



void vetor_index_struct(int vet[], Index index[], int tamanho_vet, int tamanho_ind) {
    for (int i = 0; i < tamanho_ind; i++) {
        int posicao_final = (i + 1) * tamanho_ind - 1; //de 999 em 999;
        if (posicao_final >= tamanho_vet) posicao_final = tamanho_vet - 1; // Evitar overflow
        index[i].elemento = vet[posicao_final]; //o valor do array de indices eh igual ao valor do array de vetores na posição 999 e assim por diante.
        index[i].posicao = posicao_final;
    }
}

    int intervalo(Index ind[], int size, int chave){
    for(int i=0; i<size; i++){
        if(chave <= ind[i].elemento){
            return i; 
            }
        }
        
        return -1; 
    }



int busca_binaria(int vet[], Index ind[], int size_vet, int size_ind, int chave) {
    int inter = intervalo(ind, size_ind, chave);
    if (inter == -1) {
        return -1; // Chave não encontrada nos índices
    }

    int inicio = (inter == 0) ? 0 : ind[inter - 1].posicao + 1;
    int fim = ind[inter].posicao;
    int meio;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (vet[meio] == chave) {
            return meio;
        } else if (chave < vet[meio]) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }

    return -1; // Chave não encontrada
}