#include<stdio.h>
#include <conio.h>
#define p printf
#define s scanf
int x;
double suma,prom;
int gasto[15];
const char *meses[13]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
main()
{
	for(x=0;x<12;x++)
	{
		p("Dame el ingreso para el mes %s: ",meses[x]);
		s("%d",&gasto[x]);		
		suma=(suma+gasto[x]);
	}
		
		prom=(suma/(x));
		p("El gasto anual fue de = $ %.2lf",prom);
	
	
	getch();
	
}

