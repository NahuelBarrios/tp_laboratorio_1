/*
 * articulo.h
 *
 *  Created on: 24 jun. 2020
 *      Author: Nahu_
 */

#ifndef ARTICULO_H_
#define ARTICULO_H_

typedef struct
{
	int id;
	char articulo[128];
	int precio;
	char medida[51];
	int rubroId;

}eArticulo;


eArticulo* articulo_new();
eArticulo* articulo_newParametros(char* idStr,char* articuloStr,char*medidaStr,char* precioStr,char* reubroIdStr);

int articulo_setId(eArticulo* this,int id);
int articulo_getId(eArticulo* this,int* id);

int articulo_setArticulo(eArticulo* this,char* articulo);
int articulo_getArticulo(eArticulo* this,char* articulo);

int articulo_setPrecio(eArticulo* this,int precio);
int articulo_getPrecio(eArticulo* this,int* precio);

int articulo_setMedida(eArticulo* this,char* medida);
int articulo_getMedida(eArticulo* this,char* medida);

int articulo_setRubroId(eArticulo* this,int idRubro);
int articulo_getRubroId(eArticulo* this,int* idRubro);

int controller_precioMasCien(void* pPrecio);
int controller_cantCuidadoRopa(void* pIdRubro);
#endif /* ARTICULO_H_ */
