#include<iostream>
//Agregar librerias 
usingnamespace::std;


class Circulo{
	private:
		float radio;
		int x,y,visible;
	public:
		Circulo(int,int,float);
		void pintaCirculo();
		void ocultaCirculo();
		void trasladaCirculo();
		int get_x()
			{ return x;}
		int get_y()
			{return y;}
		int get_visible()
			{return visible;}
};

Circulo::Circulo(int cx,int cy,float nradio=50)
{
	x=cx;
	y=cy;
	radio=nradio;
	visible=0;
	pi=3.1416;
	
}

Circulo::pintaCirculo()
{
	visible==1;
	Circulo(x,y,radio);
}

Circulo::ocultaCirculo()
{
	unsigned guardacolor=getcolor();//tomo el color que esta activo y lo guardo en get
	if(visible)
	{
		setcolor(getbkcolor());
		circle(x,y,radio);
		visible=0;
		setcolor(guardacolor);
	}
}

Circulo::trasladaCirculo(int nx, int ny)
{
	if(visible)
	{
		ocultaCirculo();
		x=nx;
		y=ny;
		pintacirculo();
	} else
	{
		x=nx;
		y=ny;
	}
}
	


class Elipse{
	private:
		int x,y,inicio,final;
		float rx,ry;
		short visible;
	public:
		Elipse(int,int,int,int,float,float);
		void pintaElipse();
		void ocultaElipse();
		void trasladaCirculo();
		int get_x()
			{ return x;}
		int get_y()
};

Elipse::Elipse(int ix,int iy)
{
	/*x=Circulo.get_x();
	y=Circulo.get_y()+150;         Usar este código como cliente y pasar como parámetro a esta función*/
	x=ix;
	y=iy;
	inicio=0;
	final=360;
	rx=150;
	ry=100;
	visible=0;
}


Elipse::pintaElipse()
{
	visible==1;
	ellipse(x,y);
}

Elipse::ocultaElipse()
{
	unsigned guardacolor=getcolor();//tomo el color que esta activo y lo guardo en get
	if(visible)
	{
		setcolor(getbkcolor());
		ellipse(x,y);
		visible=0;
		setcolor(guardacolor);
	}
}

Elipse::trasladaElipse(int nx, int ny)
{
	if(visible)
	{
		ocultaElipse();
		x=nx;
		y=ny;
		pintaElipse();
	} else
	{
		x=nx;
		y=ny;
	}
}
	


class Linea{
	private:
		short x1,x2,y1,y2,visible;
	public:
		Linea(int,int,int,int,int);
		void pintaLinea();
		void ocultaLinea();
		void trasladaLinea();	
};

Linea::Linea(int ix1,int ix2,int iy1,int iy2)
{
	
	x1=ix1;
	x2=ix2;
	y1=iy1;
	y2=iy2;
	visible=0;
}

Linea::pintaLinea()
{
	visible==1;
	line(x1,x2,y1,y2);
}

Linea::ocultaLinea()
{
	unsigned guardacolor=getcolor();//tomo el color que esta activo y lo guardo en get
	if(visible)
	{
		setcolor(getbkcolor());
		line(x1,x2,y1,y2);
		visible=0;
		setcolor(guardacolor);
	}
}

Linea::trasladaLinea(int nx1,int nx2,int ny1,int ny2)
{
	if(visible)
	{
		ocultaLinea();
		x1=nx1;
		x2=nx2;
		y1=ny1;
		y2=ny2;
		pintaLinea();
	} else
	{
		x1=nx1;
		x2=nx2;
		y1=ny1;
		y2=ny2;
	}
}
	

class Pollo{
	private:
		Circulo cabeza;
		Elipse cuerpo;
		Linea pata1;
		Linea pata2;
		Linea mitad1Pico;
		Linea mitad2Pico;
		short visible;
	public:
		Pollo(int ,int,float);
		void pintaPollo();
		void ocultaPollo();
		void trasladaPollo();
};

Pollo::Pollo(int coordenadaInicioX,coordenadaInicioY)
{
	
	cabeza.Circulo(coordenadaInicioX,coordenadaInicioY);
	cuerpo.
	
	
}





Pollo::pintaPollo()
{
	
	visible=1;
	
	cabeza.pintaCirculo();
		
	
}


Pollo::ocultaPollo()
{
	
	
	
	
	
}

Pollo::trasladaPollo()
{
	
	
	
	
	
}




int main()
{
	//activamos los graficos:
	int monitor=DETECT;
	int modo;
	initgraph(&monitor,&modo,"c:\\TC\\BGI");
  	Circulo cirobj(350,280,70);
	
	
	
	

	system("pause");
	return 0;
}


/*¿Cómo hago para pasar mis parametros al circulo?*/
