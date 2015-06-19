#include "stdafx.h"
#include "Lista.h"


Lista::Lista()
{
	this->primero = NULL;
	this->ultimo = NULL;
}

Lista::~Lista()
{

}
void Lista::insertar(Elemento* val)
{
	Elemento* tmp = val;
	if (primero == NULL)
	{
		primero = ultimo = tmp;
	}
	else
	{
		ultimo->siguiente = tmp;
		ultimo = tmp;
	}
}

void Lista::insertarAlInicio(Elemento* val)
{

	if (primero == NULL)
	{
		ultimo = primero = val;
	}
	else
	{
		Elemento *tmp = val;
		tmp->siguiente = primero;
		primero = tmp;
	}
}

void Lista::insertarEnPos(Elemento* val)
{
	if (anterior = NULL)
	{
		anterior->siguiente = val;
		anterior = anterior->siguiente;
	}
}

void Lista::insertarAlFinal(Elemento* val)
{
	if (primero == NULL)
	{
		ultimo = primero = val;
	}
	else
	{
		ultimo->siguiente = val;
		ultimo = ultimo->siguiente;
	}
}

void Lista::imprimir(Elemento* e)
{
	Elemento *tmp;
	if (primero != NULL)
	{
		tmp = primero;
	}
	else
	{
		tmp = e;
		tmp->siguiente = NULL;
		primero = tmp;
	}
	while (tmp != NULL)
	{
		cout << tmp->siguiente;
		tmp = tmp->siguiente;
	}
}



int Lista::size()
{
	int i = 0;
	Elemento* tmp = primero;
	while (tmp != NULL) {
		i++;
		tmp = tmp->siguiente;
	}
	return i;
}
