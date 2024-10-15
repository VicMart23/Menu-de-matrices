#include<stdio.h>  /*Víctor Martín Rodríguez Velázquez. Fecha:2/FEB/24*/
#include<stdlib.h>
#include<math.h>
#define MAX 10

int lim;
float A[MAX][MAX],B[MAX][MAX];

int ord();
int mata(int);
int matb(int);
int sum(float,float);
int res(float,float);
int divi(float,float);
int ele(float);
int inv(float);
int dia(float,float);
int mula(float);
int mulb(float);

long int main()
{int bo=0,ba=0,bb=0;char op,opc;
do
	{printf("Menu.");
	printf("\na) Orden de la matrices (2 a 10).");
	printf("\nb) Captura matriz A.");
	printf("\nc) Captura matriz B.");
	printf("\nd) A+B");
	printf("\ne) A-B");
	printf("\nf) A/B");
	printf("\ng) A^-1");
	printf("\nh) B^T");
	printf("\ni) Diagonal principal.");
	printf("\nj) k*A");
	printf("\nk) k*B");
	printf("\nl) Salir.");
	printf("\nIngresa el valor: ");
	op=getch();printf("%c \n",op);
	system("pause");system("cls");
	switch(op)
		{case 'a':	{bo=ord();break;}
		case 'b':	{ba=mata(bo);break;}
		case 'c':	{bb=matb(bo);break;}
		case 'd':	{sum(ba,bb);break;}
		case 'e':	{res(ba,bb);break;}
		case 'f':	{divi(ba,bb);break;}
		case 'g':	{ele(ba);break;}
		case 'h':	{inv(bb);break;}
		case 'i':	{dia(ba,bb);break;}
		case 'j':	{mula(ba);break;}
		case 'k':	{mulb(bb);break;}
		case 'l':	
			{do
				{printf("%cEstas seguro de salir? S/N: ",168);
				opc=getch();printf("%c \n",opc);
				system("pause");system("cls");
				switch(opc)
					{case 'n': {main();break;}
					defaul: {printf("Valor incorrecto. Intenta de nuevo.\n");
							system("pause");system("cls");}}}
			while(!(opc=='s'));break;}
		default:	{printf("Valor incorrecto. Intenta de nuevo.\n");
					system("pause");system("cls");}}}
while(!(op=='l'));
return(0);}

int ord()
{do
	{printf("Ingresa el orden de las matrices (2-10):");
	scanf("%d",&lim);printf("\n");}
while(!((lim>1)&&(lim<=MAX)));
system("pause");system("cls");
return(1);}

int mata(fa)
{int i,j,x=0;char op;
if(fa==0)
	{printf("Error, no se a ingresado el orden.\n");}
else
	{printf("Matriz A.\n");
	for(i=0;i<lim;i++)
		{for(j=0;j<lim;j++)
			{printf("Ingrese el dato en [%d][%d]: ",i,j);
			scanf("%f",&A[i][j]);}}
	for(i=0;i<lim;i++)
		{for(j=0;j<lim;j++)
			{printf("%f\t",A[j][i]);}
		printf("\n");}
	do
		{printf("Modificar alguna localidad S/N: ");
		op=getch();printf("%c\n",op);
		if(op=='s')
			{printf("Ingrese la localida que se quiere modificar.\n");
			do
				{printf("i: ");scanf("%d",&i);}
			while(!((i>=0)&&(i<lim)));
			do
				{printf("j: ");scanf("%d",&j);}
			while(!((j>=0)&&(j<lim)));
			printf("Ingresa el nuevo valor: ");
			scanf("%f",&A[i][j]);
			for(i=0;i<lim;i++)
				{for(j=0;j<lim;j++)
					{printf("%f\t",A[j][i]);}
				printf("\n");}}}
	while(!(op=='n'));x=1;}
system("pause");system("cls");
return(x);}

int matb(fb)
{int i,j,y=0;char op;
if(fb==0)
	{printf("Error, no se a ingresado el orden.\n");}
else
	{printf("Matriz B.\n");
	for(i=0;i<lim;i++)
		{for(j=0;j<lim;j++)
			{printf("Ingrese el dato en [%d][%d]: ",i,j);
			scanf("%f",&B[i][j]);}}
	for(i=0;i<lim;i++)
		{for(j=0;j<lim;j++)
			{printf("%f\t",B[j][i]);}
		printf("\n");}
	do
		{printf("Modificar alguna localidad S/N: ");
		op=getch();printf("%c\n",op);
		if(op=='s')
			{printf("Ingrese la localida que se quiere modificar.\n");
			do
				{printf("i: ");scanf("%d",&i);}
			while(!((i>=0)&&(i<lim)));
			do
				{printf("j: ");scanf("%d",&j);}
			while(!((j>=0)&&(j<lim)));
			printf("Ingresa el nuevo valor: ");
			scanf("%f",&B[i][j]);
			for(i=0;i<lim;i++)
				{for(j=0;j<lim;j++)
					{printf("%f\t",B[j][i]);}
				printf("\n");}}}
	while(!(op=='n'));y=1;}
system("pause");system("cls");
return(y);}

int sum(float fa,float fb)
{int i,j;float C[MAX][MAX];
if(fa==0)
	{printf("Error, no se a registrado la matriz A.");}
else
	{if(fb==0)
		{printf("Error, no se a registrado la matriz B.");}
	else
		{for(i=0;i<lim;i++)
			{for(j=0;j<lim;j++)
				{C[i][j]=A[i][j]+B[i][j];}}
		printf("Matriz A.\n");
		for(i=0;i<lim;i++)
			{for(j=0;j<lim;j++)
				{printf("%f\t",A[j][i]);}
			printf("\n");}
		printf("\nMatriz B.\n");
		for(i=0;i<lim;i++)
			{for(j=0;j<lim;j++)
				{printf("%f\t",B[j][i]);}
			printf("\n");}
		printf("\nMatriz A+B.\n");
		for(i=0;i<lim;i++)
			{for(j=0;j<lim;j++)
				{printf("%f\t",C[j][i]);}
			printf("\n");}}}
printf("\n");system("pause");system("cls");
return(0);}

int res(float fa,float fb)
{int i,j;float C[MAX][MAX];
if(fa==0)
	{printf("Error, no se a registrado la matriz A.");}
else
	{if(fb==0)
		{printf("Error, no se a registrado la matriz B.");}
	else
		{for(i=0;i<lim;i++)
			{for(j=0;j<lim;j++)
				{C[i][j]=A[i][j]-B[i][j];}}
		printf("Matriz A.\n");
		for(i=0;i<lim;i++)
			{for(j=0;j<lim;j++)
				{printf("%f\t",A[j][i]);}
			printf("\n");}
		printf("\nMatriz B.\n");
		for(i=0;i<lim;i++)
			{for(j=0;j<lim;j++)
				{printf("%f\t",B[j][i]);}
			printf("\n");}
		printf("\nMatriz A-B.\n");
		for(i=0;i<lim;i++)
			{for(j=0;j<lim;j++)
				{printf("%f\t",C[j][i]);}
			printf("\n");}}}
printf("\n");system("pause");system("cls");
return(0);}

int divi(float fa,float fb)
{int i,j;float C[MAX][MAX];
if(fa==0)
	{printf("Error, no se a registrado la matriz A.");}
else
	{if(fb==0)
		{printf("Error, no se a registrado la matriz B.");}
	else
		{for(i=0;i<lim;i++)
			{for(j=0;j<lim;j++)
				{C[i][j]=A[i][j]/B[i][j];}}
		printf("Matriz A.\n");
		for(i=0;i<lim;i++)
			{for(j=0;j<lim;j++)
				{printf("%f\t",A[j][i]);}
			printf("\n");}
		printf("\nMatriz B.\n");
		for(i=0;i<lim;i++)
			{for(j=0;j<lim;j++)
				{printf("%f\t",B[j][i]);}
			printf("\n");}
		printf("\nMatriz A/B.\n");
		for(i=0;i<lim;i++)
			{for(j=0;j<lim;j++)
				{printf("%f\t",C[j][i]);}
			printf("\n");}}}
printf("\n");system("pause");system("cls");
return(0);}

int ele(float fa)
{int i,j;float C[MAX][MAX];
if(fa==0)
	{printf("Error, no se a registrado la matriz A.");}
else
	{for(i=0;i<lim;i++)
		{for(j=0;j<lim;j++)
			{C[i][j]=pow(A[i][j],-1);}}
	printf("Matriz A.\n");
	for(i=0;i<lim;i++)
		{for(j=0;j<lim;j++)
			{printf("%f\t",A[j][i]);}
		printf("\n");}
	printf("\nMatriz A^-1.\n");
	for(i=0;i<lim;i++)
		{for(j=0;j<lim;j++)
			{printf("%f\t",C[j][i]);}
		printf("\n");}}
printf("\n");system("pause");system("cls");
return(0);}

int inv(float fb)
{int i,j;
if(fb==0)
	{printf("Error, no se a registrado la matriz B.");}
else
	{printf("Matriz B.\n");
	for(i=0;i<lim;i++)
		{for(j=0;j<lim;j++)
			{printf("%f\t",B[j][i]);}
		printf("\n");}
	printf("\nMatriz B^T.\n");
	for(j=0;j<lim;j++)
		{for(i=0;i<lim;i++)
			{printf("%f\t",B[j][i]);}
		printf("\n");}}
printf("\n");system("pause");system("cls");		
return(0);}

int dia(float fa,float fb)
{int i,j,op;
if((fa==1)||(fb==1))
	{do
		{printf("Diagonal principal.");
		printf("\n1.- Matriz A.");
		printf("\n2.- Matriz B.");
		printf("\n3.- Matriz A y B.");
		printf("\nIngresa la opci%cn: ",162);
		scanf("%d",&op);
		system("pause");system("cls");}
	while(!((op>0)&&(op<=3)));
		{switch(op)
			{case 1:
				{if(fa==0)
					{printf("Error, no se a registrado la matriz A.\n");}
				else
					{printf("Matriz A.\n");
					for(i=0;i<lim;i++)
						{for(j=0;j<lim;j++)
							{printf("%f\t",A[j][i]);}
						printf("\n");}
					printf("Diagonal principal en la matriz A.\n");
					for(i=0;i<lim;i++)
						{for(j=0;j<lim;j++)
							{if(i==j)
								{printf("%f\t ",A[i][j]);}}}}break;}
			case 2:
				{if(fb==0)
					{printf("Error, no se a registrado la matriz B.\n");}
				else
					{printf("Matriz B.\n");
					for(i=0;i<lim;i++)
						{for(j=0;j<lim;j++)
							{printf("%f\t",B[j][i]);}
						printf("\n");}
					printf("Diagonal principal en la matriz A.\n");
					for(i=0;i<lim;i++)
						{for(j=0;j<lim;j++)
							{if(i==j)
								{printf("%f\t ",B[i][j]);}}}}break;}
			case 3:
				{if(fa==0)
					{printf("Error, no se a registrado la matriz A.\n");}
				else
					{if(fb==0)
						{printf("Error, no se a registrado la matriz B.\n");}
					else
						{printf("Matriz A.\n");
						for(i=0;i<lim;i++)
							{for(j=0;j<lim;j++)
								{printf("%f\t",A[j][i]);}
							printf("\n");}
						printf("Diagonal principal en la matriz A.\n");
						for(i=0;i<lim;i++)
							{for(j=0;j<lim;j++)
								{if(i==j)
									{printf("%f\t ",A[i][j]);}}}
						printf("\n\nMatriz B.\n");
						for(i=0;i<lim;i++)
							{for(j=0;j<lim;j++)
								{printf("%f\t",B[j][i]);}
							printf("\n");}
						printf("Diagonal principal en la matriz B.\n");
						for(i=0;i<lim;i++)
							{for(j=0;j<lim;j++)
								{if(i==j)
									{printf("%f\t ",B[i][j]);}}}}}break;}}}}				
else
	{printf("Error, no se a registrado ninguna matriz.");}
printf("\n");system("pause");system("cls");
return(0);}

int mula(float fa)
{int i,j;float k,C[MAX][MAX];
if(fa==0)
	{printf("Error, no se a registrado la matriz A.");}
else
	{printf("Ingresa el valor de k: ");scanf("%f",&k);
	for(i=0;i<lim;i++)
		{for(j=0;j<lim;j++)
			{C[i][j]=k*A[i][j];}}
	printf("\nMatriz A.\n");
	for(i=0;i<lim;i++)
		{for(j=0;j<lim;j++)
			{printf("%f\t",A[j][i]);}
		printf("\n");}
	printf("\nMatriz k*A.\n");
	for(i=0;i<lim;i++)
		{for(j=0;j<lim;j++)
			{printf("%f\t",C[j][i]);}
		printf("\n");}}
printf("\n");system("pause");system("cls");
return(0);}

int mulb(float fb)
{int i,j;float k,C[MAX][MAX];
if(fb==0)
	{printf("Error, no se a registrado la matriz B.");}
else
	{printf("Ingresa el valor de k: ");scanf("%f",&k);
	for(i=0;i<lim;i++)
		{for(j=0;j<lim;j++)
			{C[i][j]=k*B[i][j];}}
	printf("\nMatriz B.\n");
	for(i=0;i<lim;i++)
		{for(j=0;j<lim;j++)
			{printf("%f\t",B[j][i]);}
		printf("\n");}
	printf("\nMatriz k*B.\n");
	for(i=0;i<lim;i++)
		{for(j=0;j<lim;j++)
			{printf("%f\t",C[j][i]);}
		printf("\n");}}
printf("\n");system("pause");system("cls");
return(0);}

