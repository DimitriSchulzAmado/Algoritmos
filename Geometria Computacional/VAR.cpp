#include <iostream>
using namespace std;

struct ponto // para representar os pontos e vetores
{
	float x;
	float y;
};
typedef ponto vetor;

vetor cria_vetor (ponto A, ponto B) // Cria um vetor A -> B
{
	vetor AB;
	// Produto escalar entre AxB
	AB.x = B.x - A.x;
	AB.y = B.y - A.y;
	return AB;
}
int vetorial (vetor A, vetor B) // Funcao para fazer o produto vetorial de vetores
{
	int v;
	
	v = A.x * B.y - A.y * B.x;
	return v;
}

/*
Posicao de C em relacao ao segmento AB
 1: esquerda
-1: direita
 0: colinear
*/

int sentido (ponto A, ponto B, ponto C) //Funcao para verificar o sentido de um ponto em relacao a um vetor
{
	vetor AB;
	vetor AC;
	int vet;
	AB = cria_vetor(A, B);
	AC = cria_vetor(A, C);
	vet = vetorial(AB, AC);
	if (vet > 0)
		return 1;
	else if (vet < 0)
		return -1;
	else
		return 0;
}
int main ()
{
	ponto T; // trave 1
	ponto T2; // trave 2
	ponto B;  // bola

	cin >> T.x >> T.y;
	cin >> T2.x >> T2.y;
	cin >> B.x >> B.y;

	int s;
	s = sentido(T, T2, B);

	if (s == 0 || s == -1) 
		cout << "NAO GOL" << endl;
	else if ( s == 1)
		cout << "GOL" << endl;
		
	return 0;
}
