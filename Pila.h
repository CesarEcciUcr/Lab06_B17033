#pragma once
#include "Lista.h"
class Pila : public Lista
{
public:

	Pila();
	~Pila();
	void push(Elemento*);
	void peek();
	Pila pop();

private:

	Elemento *A[];
	Elemento* top;
};

