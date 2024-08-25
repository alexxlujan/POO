#include<iostream>
#include<stdlib.h>
#include<cstdio>
#include <locale.h>
#include<fstream>


/*
************************************
*	Luján García César Alejandro.  *
*	Practica 3. 				   *	
*	Clase persona.				   *
*	19 Septiembre 2019	           *
************************************
*/




using namespace std;



class Persona
{

	private:
		string nombre, apellidoPaterno,apellidoMaterno;
		int mesNacimiento,edad,diaNacimiento,anionacimiento;
	public:
			Persona();
			~Persona();
			int calculaEdad();
			void imprimirValores();
			void edicionAtributos();
			void lecturaDatos();
			void escribeArchivo();
};

void Persona::lecturaDatos()
{
	cout<<"\nIngrese los siguentes datos. ";
	cout<<"\nNombre o nombres: ";fflush(stdin);
	cin>>this->nombre;
	cout<<"\nApellido paterno: ";fflush(stdin);
	cin>>this->apellidoPaterno;
	cout<<"\nApellido materno: ";fflush(stdin);
	cin>>this->apellidoMaterno;
	cout<<"\nAño de nacimiento: ";cin>>this->anionacimiento;
	cout<<"\nMes de nacimiento: ";cin>>this->mesNacimiento;
	cout<<"\nDía de nacimiento: ";cin>>this->diaNacimiento;
	system("pause");
}
Persona::Persona()
{
	cout<<"\nObjeto creado\n";

}

int Persona::calculaEdad()
{
	this->edad=2019-this->anionacimiento;
	if( (this->mesNacimiento>9 && this->diaNacimiento>19) || (this->mesNacimiento>9 && this->diaNacimiento<19) ) 
		this->edad--;
	return this->edad;
}


void Persona::imprimirValores()
{
	int edad;
	cout<<"\nLos datos son.";
	cout<<"\nNombre o nombres: "<<this->nombre;
	cout<<"\nApellido paterno: "<<this->apellidoPaterno;
	cout<<"\nApellido materno: "<<this->apellidoMaterno;
	cout<<"\nAño de nacimiento: "<<this->anionacimiento;
	cout<<"\nMes de nacimiento: "<<this->mesNacimiento;
	cout<<"\nDía de nacimiento: "<<this->diaNacimiento;
	edad = Persona::calculaEdad();
	cout<<"\nEdad: "<<edad<<"\n";
	
	system("pause");
	system("cls");
}

void Persona::edicionAtributos()
{
	int opcion1,opcion2;
	
	
	cout<<"\nDesea modificar un dato, presione 1.\nMofidicar todos los datos presione 2.\n";
	cin>>opcion1;
	if(opcion1==1)
	{
	
		cout<<"\n1.Nombre o nombres. ";
		cout<<"\n2.Apellido paterno. ";
		cout<<"\n3.Apellido materno. ";
		cout<<"\n4.Año de nacimiento. ";
		cout<<"\n5.Mes de nacimiento. ";
		cout<<"\n6.Día de nacimiento. ";
		cout<<"\nEliga la opción de acuerdo al dato que desea modificar: ";
		cin>>opcion2;
		
		switch(opcion2)
		{	
			cout<<"\nIngrese el nuevo dato: \n";
			case 1:
					cin>>this->nombre;
					cout<<"\n";
					system("pause");
					break;
			case 2: 
					cin>>this->apellidoPaterno;
					break;
			case 3:
					cin>>this->apellidoMaterno;
					cout<<"\n";
					system("pause");
					break;
			case 4:
					cin>>this->anionacimiento;
					cout<<"\n";
					system("pause");
					break;
			case 5:
					cin>>this->mesNacimiento;
					cout<<"\n";
					system("pause");
					break;
			case 6:
					cin>>this->diaNacimiento;
					cout<<"\n";
					system("pause");
					break;
		}
	}
	else
		Persona::lecturaDatos();
	
	system("cls");
}


void Persona::escribeArchivo()
{
	
	ofstream registro;
	registro.open("archivo");
	if(!registro.is_open())
		cout<<"\nNo es posible abrir el archivo.\n";
	else
	{
		this->edad=Persona::calculaEdad();//Por si no se calculo la edad
		registro<<this->nombre<<"\n";
		registro<<this->apellidoPaterno<<endl;
		registro<<this->apellidoMaterno<<endl;
		registro<<this->anionacimiento<<endl;
		registro<<this->mesNacimiento<<endl;
		registro<<this->diaNacimiento<<endl;
		registro<<this->edad<<endl;
		registro.flush();
		registro.close();
	}
	
}

Persona::~Persona()
{
	cout<<"\nObjeto eliminado.\n";
	
}


int ConfiguraIdioma()
{

	//Cambia al idioma Español   
	struct lconv *lcPtr;
	setlocale(LC_ALL, "spanish");
	lcPtr = localeconv();

	//Configura cantidades para México
	lcPtr->decimal_point = ".";
	lcPtr->thousands_sep = ",";
	lcPtr->grouping = "3";	
}


int main()
{
	ConfiguraIdioma();
	
	cout<<"\nBienvenido.\n";
		
	Persona obj;
	obj.lecturaDatos();
	obj.calculaEdad();
	obj.imprimirValores();
	obj.edicionAtributos();
	obj.escribeArchivo();
	obj.~Persona();
	
	cout<<"\n¡Gracias por usar mi programa,un goya para ti!\n";
	system("pause");
	return 0;
}



