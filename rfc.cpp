//RFC Josmar
#include <stdio.h>
#include <conio.h>
#include<string.h>
#include<ctype.h>
char
nom[30],ap1[30],ap2[30],an[5],mes[4],dia[10],RFC[12],aux[7];
int i;
int main ()
{
	printf("Dame tu nombre: ");
	gets(nom);	
	strupr(nom);
	printf("Dame tu apellido paterno: ");
	gets(ap1);	
	strupr(ap1);
	printf("Dame tu apellido materno: ");
	gets(ap2);
	strupr(ap2);
	printf("Dame el anio en que naciste: ");
	gets(an);	
	printf("Dame el mes en que naciste: ");
	gets(mes);	
	printf("Dame el dia que naciste: ");
	gets(dia);

	for(i=1;i<=4;i++)
		 {
		 	if(ap1[i]=='A'||ap1[i]=='E'||ap1[i]=='I'||ap1[i]=='O'||ap1[i]=='U')
		 	{
		 	ap1[1]=ap1[i];
		 			
		 	}
		 }
		 aux[5]=an[0];
		 aux[6]=an[1];
		 if(strlen(an)==2)
		 {
		 aux[0]='0';
		 an[0]=aux[0];
		 an[1]=aux[0];
		 an[2]=aux[5];
		 an[3]=aux[6];
		 RFC[4]=an[2];
		 RFC[5]=an[3];
		 }
		 
		 
		 
		 aux[2]=mes[0];
		if (strlen(mes)==1)
		{		
 		aux[1]= '0' ;
 		mes[0]= aux[1];
 		RFC[6]=mes[0];
 		mes[1]=aux[2];
 		RFC[7]=mes[1];
	 		
		}	
		
		aux[4]=dia[0];
		if (strlen(dia)==1)
		{		
 		aux[3]= '0' ;
 		dia[0]= aux[3];
 		dia[1]=aux[4];
	 	RFC[9]=dia[1];	
		}	
		
		
		
	RFC[0]= ap1[0];
	RFC[1]= ap1[1];
	RFC[2]= ap2[0];
	RFC[3]= nom[0];
	RFC[4]= an[2];
	RFC[5]= an[3];
	RFC[6]= mes[0];
	RFC[7]= mes[1];			
	RFC[8]= dia[0];
	RFC[9]= dia[1];
	
	printf("\n Tu RFC es: %s",RFC);
	
	
	getch();
}

