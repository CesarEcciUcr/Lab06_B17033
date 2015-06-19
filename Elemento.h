#pragma once

#include <iostream>
using namespace std;

class Elemento {
	friend class Lista;
	friend ostream & operator<<(ostream &, const Elemento &);

public:
	Elemento();
	Elemento *siguiente;

public:

	virtual ~Elemento();
	virtual int compareTo(Elemento *) = 0;
	virtual void imprimir(ostream &) const = 0;

	bool operator<(Elemento &);
	bool operator<=(Elemento &);
	bool operator>(Elemento &);
	bool operator>=(Elemento &);

};

ostream & operator<<(ostream &, const Elemento &);
