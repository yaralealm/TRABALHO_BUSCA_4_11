#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

struct index {
    int elemento; 
    int posicao; 
}; 

typedef struct index Index; 

void carrega_vetor_ordenado(int colecao[], int valor_inicial, int tamanho);

void imprime_vetor(int colecao[], int pos);

void vetor_index_struct(int vet[], Index index[], int tamanho_vet, int tamanho_ind);

int intervalo(Index ind[], int size, int chave); 

int busca_binaria(int vet[], Index ind[], int size_vet, int size_ind, int chave);
