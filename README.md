DISCIPLINA: ESTRUTURA DE DADOS;
DANIELLE PAULO DA SILVA;
YARA LEAL MATHEUS;

Segundo Tenenbaum, o método de busca sequencial indexada é uma técnica que aumenta a eficiência de busca em um arquivo classificado, apesar de requerer mais espaço de memória. 
Nas palavras do autor "Uma tabela auxiliar, chamada índice, é reservada além do próprio arquivo classificado. Cada elemento no índice consiste em uma chave kindex e um ponteiro 
para o registro no arquivo que corresponde a kindex. Os elementos no índice e no arquivo devem ser classificados pela chave." É um método, portanto que tem como ideia principal 
a construção de um vetor adicional contendo determinados elementos do vetor principal e suas posições (escolhidos através da divisão do vetor principal em blocos). A chave seria
localizada primeiramente nesse vetor adicional visando encontrar o intervalo em que ela se encontra no vetor principal. Isso facilitaria o processo, já que a quantidade de 
elementos da busca seria bem menor. 
A primeira estratégia pensada para a construção deste trabalho foi construir um vetor de índices contendo 100 elementos, sendo que os blocos do vetor principal seriam de 10.000
em 10.000 números. Isso faria com que a busca na tabela de índices fosse rápida, enquanto a busca no intervalo selecionado fosse um pouco mais custosa. 
Posteriormente foi decidido que o vetor de índices teria 1000 elementos e os blocos seriam de 1000 em 1000, equilibrando o tempo gasto da máquina. 
O vetor principal foi ordenado aleatoriamente e o vetor de índices foi contruído com uma estrutura de looping que armazenava os elementos do vetor principal segundo a regra criada. 
Foram utilizadas funções para descobrir o intervalo da chave e se ela de fato estava presente no vetor principal e também para realizar a busca binária que indica a posição final
do termo procurado. 
O método de busca binária foi escolhido pela questão de otimização do tempo de processamento da máquina. 
Foi necessário o uso de compilador online devido a quantidade de elementos do vetor principal. 

LINK YOUTUBE - https://youtu.be/snGMrjwWBII
