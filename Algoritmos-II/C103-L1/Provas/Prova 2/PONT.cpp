#include <iostream>
using namespace std;

int acimaMedia(int *vetor, int N)
{
    float soma = 0;  // Soma dos elementos
    int i;           // contador
    float media = 0; // Média dos elementos
    int acima = 0;   // Elementos acima da media

    // Somando os elementos para fazer a media
    for (i = 0; i < N; i++)
    {
        soma = soma + *vetor;
        i++;
    }

    // media dos elementos
    media = soma / (N * 1.0);

    for (i = 0; i < N; i++)
    {
        if (*vetor > media)
            acima++;
        i++;
    }

    return acima;
}

int main()
{

    int N;
    int *vetor = NULL; // armazena os dados
    int *p;            // ponteiro aux para leitura e escrita
    int n[100];        // Elementos inseridos
    int i;             // contador
    int soma = 0;
    float media;

    // Ler o tamanho desejado para o vetor
    cin >> N;

    // Alocar memoria para o vetor
    vetor = new int[N];

    // Preencher o vetor
    for (i = 0; i < N; i++)
        cin >> n[i];

    vetor = n;

    // Retornando o valor da função e exibindo resultado
    cout << acimaMedia(vetor, N) << " elementos acima da media" << endl;

    return 0;
}
