/*
Faça um programa que leia inicialmente o tamanho N de um vetor de inteiros.

Depois, o programa deve ler N números inteiros e os inseri-los no vetor, usando um ponteiro para esta tarefa: se o vetor é v, e o ponteiro é p, você deve usar p para apontar para a posição correta do vetor, e usar este ponteiro para inserir o elemento no vetor.

Finalmente, varra o vetor usando um ponteiro, e mostre o seu ocnteúdo.  

Entrada
A entrada consiste de 2 linhas:
- a primeira linha contém apenas um inteiro N, que corresponde ao tamanho do vetor

- na segunda linha, tem-se N inteiros, separados por um espaço em branco.

Saída
Na saída, o programa deve mostrar os elementos inseridos.


Exemplo de entrada   
4
40 32 51 70

Exemplo de saída
40 32 51 70
*/

#include<iostream>
using namespace std;
int main()
{
    int *vetor = NULL; // armazena os dados   
    int tam; // tamanho desejado para o vetor    
    int i; // contador    
    int *p; // ponteiro aux para leitura e escrita    
    
    // Ler o tamanho desejado para o vetor    
    cin >> tam;

    // Alocar memoria para o vetor   
    vetor = new int [tam];
    
    // Preencher o vetor    
    p = vetor;
    for(i=0;i<tam;i++)
    {
        cin >> *p;
        p++;
    }
    
    // Mostrar o vetor    
    p = vetor;
    for(i=0;i<tam;i++)
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    // Liberar a memoria usada pelo vetor    
    delete [] vetor;
    
    return 0;
}