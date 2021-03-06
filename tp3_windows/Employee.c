#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "Employee.h"
#include "utn.h"

Employee* employee_new()
{
	Employee* empleado = (Employee*)malloc( sizeof(Employee)); // pido el espacio de memoria

		if(empleado != NULL) // valido que no sea NULL
		{
			empleado->id = 0; // CARGO TODOS LOS VALORES EN 0, asi no tienen basura dentro
			strcpy(empleado->nombre, "");
			empleado->horasTrabajadas = 0;
			empleado->sueldo = 0;
		}

	return empleado;
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldo)
{
	Employee* empleado = employee_new(); // Le asigno puntero del array el nuevo espacio

	if(empleado != NULL  && idStr!=NULL && nombreStr!=NULL && horasTrabajadasStr!=NULL && sueldo!=NULL)
	{
		employee_setId(empleado,atoi(idStr)); // cargo los datos llamando la funcion set. transformandolos de char a enteros a traves del atoi
		employee_setNombre(empleado,nombreStr);
		employee_setHorasTrabajadas(empleado,atoi(horasTrabajadasStr));
		employee_setSueldo(empleado,atoi(sueldo));
	}
return empleado; // Retorno el empleado
}

int employee_delete(Employee* this)
{
	int retorno = -1;
	if(this!=NULL)
	{
		free(this);
		retorno = 0;
	}
	return retorno;
}
//*******************************************************************************************************************************
int employee_setId(Employee* this,int id)
{
	int retorno = -1;

	if(this!=NULL && id>=0)
	{
		this->id = id;
		retorno = 0;
	}
	return retorno;
}

int employee_getId(Employee* this,int* id)
{
	int retorno = -1;

		if(this!=NULL && id!= NULL)
		{
			*id = this->id;
			retorno = 0;
		}
		return retorno;
}

//*******************************************************************************************************************************
int employee_setNombre(Employee* this,char* nombre)
{
	int retorno = -1;

	if(this!=NULL && nombre!= NULL)
	{
		strcpy(this->nombre,nombre);
		retorno = 0;
	}

	return retorno;
}

int employee_getNombre(Employee* this,char* nombre)
{
	int retorno = -1;

	if(this!=NULL && nombre!= NULL)
	{
		strcpy(nombre,this->nombre);
		retorno = 0;
	}
	return retorno;
}
//*******************************************************************************************************************************

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
	int retorno = -1;

	if(this!=NULL && horasTrabajadas>0)
	{
		this->horasTrabajadas=horasTrabajadas;
		retorno = 0;
	}

	return retorno;
}

int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
{
	int retorno = -1;

		if(this!=NULL && horasTrabajadas!= NULL)
		{
			*horasTrabajadas = this->horasTrabajadas;
			retorno = 0;
		}
		return retorno;
}
//*******************************************************************************************************************************

int employee_setSueldo(Employee* this,int sueldo)
{
	int retorno = -1;

	if(this!=NULL && sueldo>0)
	{
		this->sueldo=sueldo;
		retorno = 0;
	}

	return retorno;
}

int employee_getSueldo(Employee* this,int* sueldo)
{
	int retorno = -1;

	if(this!=NULL && sueldo!= NULL)
	{
		*sueldo = this->sueldo;
		retorno = 0;
	}
	return retorno;
}

//*******************************************************************************************************************************
