#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Informações de um ponto
struct ponto
{
	float x;
	float y;
};
typedef ponto vetor;

// Reta e segmento
struct reta
{
	ponto A;
	ponto B;
};
typedef reta segmento;

vetor cria_vetor(ponto A, ponto B)
{
	vetor AB;
	AB.x = B.x - A.x;
	AB.y = B.y - A.y;
	return AB;
}

float vetorial(vetor A, vetor B)
{
	float v;
	v = A.x * B.y - A.y * B.x;
	return v;
}

float escalar(vetor A, vetor B)
{
	float e;
	e = A.x * B.x + A.y * B.y;
	return e;
}

float area_triangulo(ponto A, ponto B, ponto C)
{
	vetor AB;
	vetor AC;
	float area;
	AB = cria_vetor(A, B);
	AC = cria_vetor(A, C);
	area = fabs(vetorial(AB, AC)) / 2;
	return area;
}

/*
Posicao de C em relacao ao segmento AB
1 -> esquerda
-1 -> direita
0 -> colinear
*/
int sentido(ponto A, ponto B, ponto C)
{
	vetor AB;
	vetor AC;
	float vet;
	AB = cria_vetor(A, B);
	AC = cria_vetor(A, C);
	vet = vetorial(AB, AC);
	if(vet > 0)
		return 1;
	else if(vet < 0)
		return -1;
	else
		return 0;
}

/*
Verifica se o ponto P esta dentro do triangulo ABC
1 -> dentro
-1 -> fora
0 -> na linha
*/
int dentro_triangulo(ponto A, ponto B, ponto C, ponto P)
{
	int s1, s2, s3;
	s1 = sentido(A, B, P);
	s2 = sentido(B, C, P);
	s3 = sentido(C, A, P);
	if(s1 == s2 && s2 == s3)
		return 1;
	else if(s1*s3 == -1 || s1*s2 == -1 || s2*s3 == -1)
		return -1;
	else
		return 0;
}

// Os pontos devem estar ordenados radialmente
// O poligono deve ser convexo
// Retorna a area do poligono
float area_poligono(ponto v[], int n)
{
	float area = 0;
	for(int i = 0; i < n - 2; i++)
	{
		area = area + area_triangulo(v[0], v[i + 1], v[i + 2]);
	}
	return area;
}


// Verifica se um ponto pertence a um segmento de reta
bool ponto_segmento(segmento S, ponto P)
{
	if(sentido(S.A, S.B, P) != 0) // 
		return false;
	else if(P.x > S.A.x && P.x < S.B.x)
		return true;
	else if(P.x < S.A.x && P.x > S.B.x)
		return true;
	else if(P.y < S.A.y && P.y > S.B.y)
		return true;
	else if(P.y > S.A.y && P.y < S.B.y)
		return true;
	else
		return false;
}

int main()
{
	ponto v[10];
        
	int n = 6;
	float area;

    for (int i=0; i<n; i++)
        cin >> v[i].x >> v[i].y;

    area = area_poligono(v, n);
   
   	cout << fixed << setprecision(2);
    cout << "Area do escudo: " << area << endl;
	return 0;
}












