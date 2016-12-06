#include "Pile.h"

void Pile::ajouterElement(double valeur)
{
	d_tableau.push_back(valeur)
}

double Pile::supprimerElement()
{
	double elem = d_tableau.front();
	d_tableau.pop_back();
	return elem;
}
