//El juego de solitario, cuenta con 5 niveles 
//solitario clasiclo
//solitario spyder
//solitario medio
//solitario avanzado
//solitario pro
//el grupo del 1-B organiza un torneo relampago en el cual por cada nivel pueden participar 3 personas.
//es necesario registrar las puntaciones obtenidas por cada participante en su respectivo nivel despues de un tiempo determinado 
//Realizar un algoritmo que permita; 1-promedio por puntuacion de cada nivel
//2-encontrar el puntaje mas alto 
//3-los puntajes van de 0 a 24.8
//encontrar al participante que tiene el puntaje
#include<iostream>

using namespace std;

void ingresadatos();
void mostrar_matriz();
float matriz[5][3];

int main()
{
	ingresadatos();
	mostrar_matriz();
}
void ingresadatos(){
	
	float mayor,prom=0,conta=0;
    int i,j;
	for (i=0; i<5; i++)
	{
		prom=0;
		for (j=0; j<3; j++)
		{
		cout<<"\nIngrese datos para la posicion"<< i<< j<<": ";
		do{
		cin>> matriz[i][j];
		}while(matriz[i][j]>0 && matriz[i][j]>=24);
		prom=prom+matriz[i][j];
		conta=prom/3;	
			if(matriz[i][j]>mayor)
			{
				mayor=matriz[i][j];
			}
	}
		cout<<"promedio"<<conta<<endl;
	    
      cout<<"El mayor de los numeros es "<<mayor<<endl;
		
	
	}
		
		}
	

void mostrar_matriz()
{
	int i,j;
	for (i=0; i<5; i++){
		for(j=0; j<3; j++){
		    
			cout<<"\t"<<matriz[i][j]<<"\t";
			}
			
		
		}
	}
