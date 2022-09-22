#include <iostream>
#include <cstring>

using namespace std;

int n;
int v[2004],
	peso[2004];
int pd[2004][2004];
int caminho[2004][2004];

int solve(int i, int cap) // os parametros sao o indice do seu produto e a capacidade atual da mochila
{
	int pega, npega; // variavel auxiliar do processo de decisao

	if(cap < 0) //caso nao tenha mais espaco na mochila
		return 0;

	if(i == n) // caso tenha chego no ultimo item
		return 0;

	if(pd[i][cap] != -1) // caso a posi??o ja esteja preenchida
		return pd[i][cap];


	npega = solve(i + 1, cap); // valor caso nao pegue o item
	pd[i][cap] = npega;

	if(cap >= peso[i]) //caso seja possivel pegar o item
	{
		pega = solve(i + 1, cap - peso[i]) + v[i]; //valor caso pegue o item

		if(pega > npega)  //caso pegar seja uma melhor opcao
		{
			caminho[i][cap] = 1; // caminho valendo 1 significa que peguei o item
			pd[i][cap] = pega;
			return pd[i][cap];
		}
		else
		{
			caminho[i][cap] = 0; // caminho valendo 0 significa que nao peguei o item
			return pd[i][cap];
		}
	}

	else
		return pd[i][cap]; // caso nao tenha mais capacidade
}




int main()
{

	memset(pd, -1, sizeof(pd));
	int mochila;
	cout << "Insira a capacidade da mochila" << endl;
	cin >> mochila;
	cout << "Insira a quantidade de elementos" << endl;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cout << "Insira o peso e o valor do item" << endl;
		cin >> peso[i] >> v[i];
	}


	cout << "O total de itens foi de: ";
	cout << solve(0, mochila) << endl;
	cout << "---------------------" << endl;

	//recuperacao de caminho
	int i = 0;
	int j = mochila;


	while(i != n)  // enquanto eu nao chegar no ultimo item
	{
		if(caminho[i][j] == 0) // se nesse momento a melhor opcao foi nao pegar eu nao pego
			i++; // avanço para o proximo i, mantendo a capacidade

		else // if(caminho[i][j] == 1) /// se nesse momento a melhor opcao for pegar, eu pego
		{
			cout << "Peguei o item " << i << endl; // indico que peguei o item
			cout << "Peso:" << peso[i] << endl;
			cout << "Valor:" << v[i] << endl;
			cout << "---------------------" << endl;
			j -= peso[i]; // diminuo a capacidade disponivel
			i++; // avanco para o proximo i
		}
	}
}
