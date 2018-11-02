#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#define p printf
#define s scanf
int x;
double a,b,r;
char opc;
int suma( int x, int y);
int resta(int x, int y);
int multi(int x, int y);
float divi(float x, float y);
main()
{
	do
	{
	printf("\t\t\t MENU DE OPERACIONES");
	printf("\n 1.SUMA" );
	printf("\n 2.RESTA" );
	printf("\n 3.MULTIPLICACION" );
	printf("\n 4.DIVISION" );
	printf("\n Seleccione una opcion: ");
	scanf("%d",&x);
		
			switch(x)
			{
				case 1:
					p("\t SUMA\n");
					p("Ingrese el 1er numero: ");
					s("%lf",&a);
					p("Ingrese el 2do numero: ");
					s("%lf",&b);
					suma(a,b);
					p("El resultado es= %.0lf\n",r);
					break;
				case 2:
					p("\t RESTA\n");
					p("Ingrese el 1er numero: ");
					s("%lf",&a);
					p("Ingrese el 2do numero: ");
					s("%lf",&b);
					resta(a,b);
					printf("El resultado es= %.0lf\n",r);
					break;
				case 3:
					p("\t MULTIPLICACION\n");
					p("Ingrese el 1er numero: ");
					s("%lf",&a);
					p("Ingrese el 2do numero: ");
					s("%lf",&b);
					multi(a,b);
					p("El resultado es= %.0lf\n",r);
					break;
				case 4:
					p("\t DIVISION\n");
					p("Ingrese el 1er numero: ");
					s("%lf",&a);
					p("Ingrese el 2do numero: ");
					s("%lf",&b);
					divi(a,b);
					p("El resultado es= %.2f\n",r);
					break;
				
				default:
					p("No existe esa opcion en el menu");
					
			}			
		
			printf("\nDesea hacer otra operacion: S/N  ");		
			opc=getche();
			opc=toupper(opc);
			system("cls");
		
	}
	while(opc=='S');
	printf(" Hasta la proxima!");
	
	getch();		
}

int suma(int x, int y)
{
	r=x+y;
	return (r);
}

int resta(int x, int y)
{
 	r= x-y;
 	return(r);
}

int multi(int x, int y)
{
	r=x*y;
	return (r);
}
float divi(float x, float y)
{
	r=x/y;
	return (r);
}
