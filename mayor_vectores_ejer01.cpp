/*
3. Usando un proceso de ordenacion de los vistos en clases, diseñe la funcions que
devuelva el elemento mayor de la lista, solo necesita ordenar,
no necesita agregar condicionales
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

//llena el vector con numeros aleatorios
void llenarvector(int vector[], int tamanio)
{
  for(int k=0; k<tamanio; k++)
  {
    int num=1+rand()%(100);
    vector[k]=num;
  }

}

void imprimevector(int vector[], int tamanio)
{
  for(int k=0; k<tamanio; k++)
  {
    cout<<endl<< vector[k];
  }
}

void ordenShell2(int a[], int n)//optimizado
{
  int i,j,inc;
  int temp;
  for(inc=1;inc<n;inc=inc*3+1);
  while(inc>0)
  {
    for(i=inc;i<n;i++)
    {
      j=i;
      temp=a[i];
      while((j>=inc)&&(a[j-inc]>temp))
      {
        a[j]=a[j-inc];
        j=j-inc;
      }
      a[j]=temp;
      }
      inc=inc/2;
    }
}

//funcion que devuelve el elemento mayor del vector
int getmayor(int vector[], int tamanio)
{
  ordenShell2(vector, tamanio);
  return vector[tamanio-1];
}

//funcion que devuelve el elemento menor del vector
int getmenor(int vector[], int tamanio)
{
  ordenShell2(vector, tamanio);
  return vector[0];
}

int main()
{
  srand(time(NULL));
  const int max=15;
  int vector[max], mayor, menor;

  llenarvector(vector, max);
  cout<<"Elementos del vector: "<<endl;
  imprimevector(vector, max);
  mayor=getmayor(vector, max);
  menor=getmenor(vector, max);
  cout<<endl<<"El elemnto mayor del vector es: "<<mayor;
  cout<<endl<<"El elemnto menor del vector es: "<<menor;
  
  return 0;
}