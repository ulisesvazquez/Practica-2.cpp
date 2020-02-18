#include<stdio.h>
#include<stdlib.h>

int main(){
float a,b,c;
char opt;

printf(" a.-Suma \n b.-Resta \n c.-Multiplicacion \n d.-Division");
printf(" \n Seleccione una opcion: ");
scanf("%d",&opt);
opt = getchar();
printf("\n Ingrese el primer operando: ");
scanf("%f",&a);
printf("\n Ingrese el segundo operando: ");
scanf("%f",&b);

switch (opt){
case 'A':
case 'a':
c=a+b;
break;
case 'B':
case 'b':
c=a-b;
break;
case 'C':
case 'c':
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
c=='R';
}
if(opt!='R'){
printf("\n El resultado es %f",c);
}
}
