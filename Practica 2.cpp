#include<stdio.h>
#include<stdlib.h>

int main(){
float a,b,c;
int opt;

printf(" 1-Suma \n 2-Resta \n 3-Multiplicacion \n 4-Division");
printf(" \n Seleccione una opcion: ");
scanf("%d",&opt);
printf("Ingrese el primer operando: ");
scanf("%f",&a);
printf("Ingrese el segundo operando: ");
scanf("%f",&b);

switch (opt){
case 1:
c=a+b;
break;
case 2:
c=a-b;
break;
case 3:
c=a*b;
break;

case 4:
while(b==0){
printf("Error,b debe de ser distinto de 0 \n");
printf("Ingrese el segundo operando: ");
scanf("%f",&b);
}
c=a/b;
break;
default:
printf("\n Error, Opcion invalida");
c=0;
}
printf("\n El resultado es %f",c);
}
