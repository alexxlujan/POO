#include <iostream>

//Luján García César Alejandro 

using namespace std;

class Frac
{
	private:
		int p,q;
	public:
		Frac(int,int);
		~Frac();
		void impresion();
		Frac operator + (Frac);
		Frac operator - (Frac);
		Frac operator * (Frac);
		Frac operator / (Frac);
};


Frac::Frac(int a, int b){
	
	this->p=a;	
	this->q=b;
	
}

Frac::~Frac(){
	
	cout<<this->p<<" / " <<this->q<<endl<<"Objeto destruido.";	
}

Frac Frac::operator + (Frac d){
	int p,q;
	p= (this -> p*d.q+this -> q*d.p); //this es el primer objeto y d.p o q es el segundo.
	q= this->p*d.p;
	Frac res(p,q);
	return res; 	
}

Frac Frac::operator - (Frac d){
	int p,q;
	p= (this -> p*d.q-this -> q*d.p); //this es el primer objeto y d.p o q es el segundo.
	q= this->p*d.p;
	Frac res(p,q);
	return res; 	
}

Frac Frac::operator * (Frac d){
	int p,q;
	p= this -> p*d.p; //this es el primer objeto y d.p o q es el segundo.
	q= this->q*d.q;
	Frac res(p,q);
	return res; 	
}

Frac Frac::operator / (Frac d){
	int p,q;
	p= (this -> p*d.q); //this es el primer objeto y d.p o q es el segundo.
	q= this->p*d.p;
	Frac res(p,q);
	return res; 	
}

void Frac::impresion(){
	
	cout<<endl<<this->p<<" / " <<this->q<<endl;
}

int main()
{
	int p1,p2,q1,q2;
	
	cout<<"\nIngrese el númerador para el objeto X: ";
	cin>>p1;
	
	cout<<"\nIngrese el denominador para el objeto X: ";
	cin>>q1;
	
	cout<<"\nIngrese el númerador para el objeto Y: ";
	cin>>p2;
	
	cout<<"\nIngrese el denominador para el objeto Y: ";
	cin>>q2;
	
	Frac x(p1,q1);
	x.impresion();
	Frac y(p2,q2);
	y.impresion();
	cout<<"\nZ = X+Y "<<endl;
	Frac z=x+y;
	z.impresion();
	cout<<"\nZ = X-Y "<<endl;
	z=x-y;
	z.impresion();
	
	cout<<"\nZ = X*Y "<<endl;
	z=x*y;
	z.impresion();
	
	cout<<"\nZ = X/Y "<<endl;
	z=x/y;
	z.impresion();
	
	return 0;
}
