#include <conio.h>
#include <stdio.h>
#define p printf
#define s scanf
int x;
int regresar(int b);
int leer();
main ()
{
	
	x=leer();
	x=regresar(x);
	x=(x*100);
	regresar(x);
	getch();
}

int leer()
{
	int a;
	p("Ingrese un numero: ");
	s("%d",&a);
	
	return (a);
}

int regresar(int b)
{
	
	p("\n El numero es : %d",b);
	return(b);
}

