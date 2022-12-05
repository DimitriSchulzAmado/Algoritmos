#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

struct dados
{
    char nome[80];         //nome da pessoa
    char estado_civil[50]; //selecionando o estado
    int sexo;              //definição dos gêneros
    int idade;             //idade da pessoa
};

int main()
{
    struct dados pessoa[100];

    char Homem_velho[80];  //homem mais velho
    double percent = 0;    //percentagem de pessoas casadas
    double casados = 0;    //quantidade de pessoas casadas
    double soma = 0;       //soma das idades para fazer a media
    double idade_media;    //idade media da população
    int maior_idade;       //idade do homem mais velho
    int i = 0;             //contador

    //entrando com o nome das pessoas
    cin.getline(pessoa[i].nome, 80);
    while (strcmp(pessoa[i].nome, "sair") != 0)
    {
        cin >> pessoa[i].sexo;
        //criticando os gêneros
        while (pessoa[i].sexo != 1 && pessoa[i].sexo != 2)
        {
            cin >> pessoa[i].sexo;
        }
        cin >> pessoa[i].estado_civil;
        // criticando os caracteres de estado_civil
        while (strcmp(pessoa[i].estado_civil, "C") != 0 && strcmp(pessoa[i].estado_civil, "S") != 0 && strcmp(pessoa[i].estado_civil, "V") != 0 && strcmp(pessoa[i].estado_civil, "D") != 0)
        {
            cin >> pessoa[i].estado_civil;
        }
        cin >> pessoa[i].idade;
        soma += pessoa[i].idade;

        //porcentagem de pessoas casadas
        if (strcmp(pessoa[i].estado_civil, "C") == 0)
            casados++;
        //Nome e idade do homem mais velho
        if (pessoa[i].idade > maior_idade && pessoa[i].sexo == 1)
        {
            maior_idade = pessoa[i].idade;
            strcpy(Homem_velho, pessoa[i].nome);
        }
        i = i + 1;
        cin.ignore();
        cin.getline(pessoa[i].nome, 80);
    }
    //conta da idade media e porcentagem
    percent = (casados * 100.0) / (i * 1.0);
    idade_media = soma / (i * 1.0);

    //apresentando resultados
    cout << fixed << setprecision(2);
    cout << "Porcentagem de pessoas casadas: " << percent << "%" << endl;
    cout << "Idade media da população: " << idade_media << " anos" << endl;
    cout << "Nome e idade do homem mais velho: " << Homem_velho << " " << maior_idade << " anos" << endl;
    return 0;
}