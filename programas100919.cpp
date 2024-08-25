#include <iostream>
#include <stdlib.h>

using namespace std;


class Cambio
{
	private:
		float numero1,numero2;
	public:
		Cambio(float ,float );
		void imprimeCambio();
};

class BuscaMayor
{
	private: 
		int num[100],mayor;
	public:
		BuscaMayor();
		void imprimeMayor();
	
};

void BuscaMayor::imprimeMayor()
{
	int cantidad;
	this->mayor=0;
	cout<<"\nIngrese la cantidad de elementos, máximo 100: ";
	cin>>cantidad;
	for(int i=1;i<=cantidad;i++)
	{
		cout<<"Ingrese un valor para el elemento "<<i;
		cin>>this->num[i];
		if(this->mayor<this->num[i])
			this->mayor=this->num[i];
	}
	
	cout<<"\nEl mayor es: "<<this->mayor;
}

Cambio::Cambio(float n1,float n2){
	int aux;
	numero1=n1;
	numero2=n2;
	aux=n2;
	numero2=numero1;
	numero1=aux;
}


void Cambio::imprimeCambio()
{
	
	cout<<"\nEl ahora el primer numero tiene un valor de: "<<this->numero1;
	cout<<"\nEl segundo numero tiene un valor de: "<<this->numero2<<"\n";
	
}


int menu()
{
	int op;
	
	do{
		cout<<"\n1. Programa de cambio de valores.\n";
		cout<<"\n2. Programa detecta el mayor número.";
		cout<<"\n3. Salir\n";
		cin>>op;
	}while(op<1 || op>3);
	
	return op;
}

int main()
{
	float numero1,numero2;
	int opcion;
	
	
	cout<<"\nBienvenido a continuación te mostrare las opciones, por favor selecciona una.\n";
	system("pause");
	opcion = menu();
	do
	{
		system("cls");
		switch (opcion)
		{
			case 1:
				cout<<"\nHola,Ingrese un primer numero de tipo real: ";
				cin>>numero1;
				cout<<"\nAhora un segundo numero de tipo real: ";
				cin>>numero2;
				Cambio Prueba1(numero1,numero2);
				Prueba1.imprimeCambio();
			break;
			case 2:
				BuscaMayor prueba2;
				prueba2.imprimeMayor();
			break;
		}	
	}while(opcion!=3);
	
	cout<<"\nGracias por usar mi programa, un goya para ti.\n";
	system("pause");
	return 0;
}
