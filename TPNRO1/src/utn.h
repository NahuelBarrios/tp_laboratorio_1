/*
 * utn.h
 *
 *  Created on: 31 mar. 2020
 *      Author: Nahu_
 */

#ifndef UTN_H_
#define UTN_H_

/**
 * \brief Solicita un entero al usuario, lo valida, verifica y devuelve el resultado
 * \param pResultado Puntero al resultado alli se dejara el entero ingresado por el usuario
 * \param mensaje Es el mensaje a ser mostrado
 * \param mensajeError Es el mensaje a ser mostrado en caso de error
 * \param minimo Valor minimo aceptado
 * \param maximo Valor maximo aceptado
 * \param reintentos Cantidad de reintentos en el caso de error
 * \return En caso de exito (0), en caso de error (-1)
 *
 */
int utn_getInt(int* pResultado,char* mensaje, char* mensajeError,int minimo, int maximo, int reintentos);

//************************************************************************************

/**
 * \brief Solicita un flotante al usuario, lo valida, verifica y devuelve el resultado
 * \param pResultado Puntero al resultado alli se dejara el flotante ingresado por el usuario
 * \param mensaje Es el mensaje a ser mostrado
 * \param mensajeError Es el mensaje a ser mostrado en caso de error
 * \param minimo Valor minimo aceptado
 * \param maximo Valor maximo aceptado
 * \param reintentos Cantidad de reintentos en el caso de error
 * \return En caso de exito (0), en caso de error (-1)
 *
 */
float utn_getFloat(float* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);


#endif /* UTN_H_ */
