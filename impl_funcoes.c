#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include "funcoes.h"
#include <stdlib.h>


#define TRUE 1
#define FALSE 0


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
		printf("%d, ", colecao[i]);
	}
	printf("\n");
}

int busca_sequencial(int file[], int size, int key){
    int founded = FALSE;
    for(int i = 0; i < size && file[i] <= key; i++){
        if(file[i] == key){
            founded = TRUE;
        }
    }
    return founded;
}

int busca_binaria(int file[], int size, int key){
		int achou = FALSE;
		int inicio, fim, meio;
		
		inicio=0; 
		fim = size-1;
		meio = (inicio + fim) / 2;
		
		while(inicio <= fim && !achou){
			if( file[meio] == key ){
				achou = TRUE;
			}else{
				if (key < file[meio]){
					fim = meio - 1;
				}else{
					inicio = meio + 1;
				}
				meio = (inicio + fim) / 2;
			}
		}
		
		return achou;
}