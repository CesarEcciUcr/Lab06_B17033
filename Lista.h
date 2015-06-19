#pragma once
#include "Elemento.h"
#include <iostream>

class Lista
{
	friend ostream & operator<<(ostream &, const Lista &);

public:

	Lista();
	virtual ~Lista();
	void insertar(Elemento*);
	void insertarAlInicio(Elemento*);
	void insertarAlFinal(Elemento*);
	void insertarEnPos(Elemento *);
	void eliminarPrimero();
	void eliminarUltimo();
	void eliminarEnPos(int);
	void imprimir(Elemento*);
	int size();

protected:
	Elemento* primero;
	Elemento* ultimo;
	Elemento* anterior;
	Elemento* siguiente;
};

ostream & operator<<(ostream &, Lista &);
