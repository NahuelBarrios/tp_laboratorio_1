/*
 ============================================================================
 Name        : TPNRO1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "math.h"

int main(void) {

	int option; // opcion
	float x,y,s,r,m,d; // x = numero1, y = numero2, s= suma, r= resta, m= multiplicar, d = dividir
	int fA,fB; // factoriales

	setbuf(stdout,NULL);

	while(option != 5)
	{
	utn_getInt(&option,"\n\n *** Bienvenidos a la calculadora Basica ***\n \
					\n1. Ingresar 1er operando \
					\n2. Ingresar 2do operando \
					\n3. Calcular todas las operaciones\
					\n4. Informar resultados\
					\n5. Salir\n\
					\nElija una opcion: ","\nError no es una opcion valida.\n",1,5,3);


	switch(option)
	{
	case 1:
		if(utn_getFloat(&x,"\nIngrese 1er operando: ","\nError.Elija un numero valido entre el 0 y 1.000.000\n",0,1000000,3) == 0)
		{
		printf("Se ingreso el numero: %2.f",x);
		}
		else{
			x = 0;
			printf("\n No se cargaron datos en la opcion 1. Por lo tanto se le dio el valor cero(0)\n");
		}
		break;

	case 2:
		if(utn_getFloat(&y,"\nIngrese 2er operando: ","\nError.Elija un numero valido entre el 0 y 1.000.000\n",0,1000000,3) == 0)
		{
		printf("Se ingreso el numero: %2.f",y);
		}
		else{
			y=0;
		printf("\n No se cargaron datos en la opcion 2.Por lo tanto se le dio el valor cero(0)\n");
		}
		break;

	case 3:
		s = sumar(x,y);
		r = resta(x,y);
		m = multiplicar(x,y);
		d = division(x,y);
		fA = factorial(x);
		fB = factorial(y);

		printf("\n *** Operaciones Calculadas ***\n");
		break;

	case 4:
		printf("\nLa suma es: %.2f\nLa resta es: %.2f\nLa multiplicacion es: %.2f",s,r,m);
		if(x == 0 || y == 0)
		{
			printf("\nLa division es: NO SE PUEDE DIVIDIR POR 0.");
		}
		else
		{
			printf("\nLa division es: %.2f",d);
		}
		printf("\nEl factorial del 1er numero es: %d\nEl factorial del 2do numero es: %d\n",fA,fB);

		break;
	case 5:
		printf("\n Gracias, vuelva pronto\n");
		break;


	}//switch

	}//While



	return 0;
}
