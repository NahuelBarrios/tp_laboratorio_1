/*
 * utn.c
 *
 *  Created on: 31 mar. 2020
 *      Author: Nahu_
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"



int utn_getInt(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1; // indico q me va a retornar mal
	int bufferInt;//Auxiliar
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0) // Valido los parametros
	{
		do
		{
			printf("%s",mensaje); // leo el msj
			scanf("%d",&bufferInt);// le asigno a bufferInt el resultado que da msj
			if(bufferInt >= minimo && bufferInt <= maximo) // valido maximo y minimo
			{
				*pResultado = bufferInt; // le asigno el contenido de buffer a pResultado
				retorno = 0; // indico al retorno que salio todo Ok.
				break; // salgo
			}
			else
			{
				printf("%s",mensajeError); // imprimo el msj de error
				reintentos--; // decremento los reintentos
			}
		}while(reintentos >= 0);
	}
	return retorno;
}


//**************************************************************

float utn_getFloat(float* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1; // indico q me va a retornar mal
	float bufferFloat;//Auxiliar
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0) // Valido los parametros
	{
		do
		{
			printf("%s",mensaje); // leo el msj
			scanf("%f",&bufferFloat);// le asigno a bufferFloat el resultado que da msj
			if(bufferFloat >= minimo && bufferFloat <= maximo) // valido maximo y minimo
			{
				*pResultado = bufferFloat; // le asigno el contenido de buffer a pResultado
				retorno = 0; // indico al retorno que salio todo Ok.
				break; // salgo
			}
			else
			{
				printf("%s",mensajeError); // imprimo el msj de error
				reintentos--; // decremento los reintentos
			}
		}while(reintentos >= 0);
	}
	return retorno;
}


