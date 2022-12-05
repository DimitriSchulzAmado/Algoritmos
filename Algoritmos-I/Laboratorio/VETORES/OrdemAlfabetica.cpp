#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
  char nome1[50];
  char nome2[50];
  char nome3[50];
  char primeiro[50];
  char segundo[50];
  char terceiro[50];

  cin.getline(nome1,50);
  cin.getline(nome2,50);
  cin.getline(nome3,50);

  if(strcmp(nome1,nome2)<0&&strcmp(nome1,nome3)<0)
  {
    strcpy(primeiro,nome1);
    if(strcmp(nome3,nome2)<0)
    {
      strcpy(segundo,nome3);
      strcpy(terceiro,nome2);
    }
    else
    {
      strcpy(segundo,nome2);
      strcpy(terceiro,nome3);
    }
  }
  if(strcmp(nome2,nome1)<0&&strcmp(nome2,nome3)<0)
  {
    strcpy(primeiro,nome2);
    if(strcmp(nome1,nome3)<0)
    {
      strcpy(segundo,nome1);
      strcpy(terceiro,nome3);
    }
    else
    {
      strcpy(segundo,nome3);
      strcpy(terceiro,nome1);
    }
  }
  if(strcmp(nome3,nome2)<0&&strcmp(nome3,nome1)<0)
  {
    strcpy(primeiro,nome3);
    if(strcmp(nome1,nome2)<0)
    {
      strcpy(segundo,nome1);
      strcpy(terceiro,nome2);
    }
    else
    {
      strcpy(segundo,nome2);
      strcpy(terceiro,nome1);
    }
  }
  cout << primeiro <<" "<< segundo <<" "<< terceiro <<endl;
  return 0;
}