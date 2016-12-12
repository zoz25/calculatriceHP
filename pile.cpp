<<<<<<< HEAD


void Pile::ajouterOperande(double valeur)
=======
#include "Pile.h"

void Pile::ajouterElement(double valeur)
>>>>>>> origin/master
{
	d_tableau.push_back(valeur);
}


void Pile::supprimerElement(void)
{
	d_tableau.pop_back();
}

double Pile::supprimerElement()
{
	double elem = d_tableau.front();
	d_tableau.pop_back();
	return elem;
}
