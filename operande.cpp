#include "operande.h"

Operande::Operande()
{
	d_pile.ajouterElement(0.0);
	d_x=0;
}

Operande::getX()
{
	return d_x;
}
Operande::getY()
{
	return d_y;
}

Operande::ajouterOperande(double valeur)
{
	d_y = d_x;
	d_x = valeur;
	d_pile.ajouterElement(valeur);
}

double Operande::supprimerOperande()
{
	return d_pile.supprimerElement();
}

void Operande::somme()
{
	d_pile.supprimerElement();
	d_pile.supprimerElement();
	d_x = d_x + d_y;
	d_y = d_pile.front();
	d_pile.ajouterElement(d_x);
	
}
void Operande::soustraction()
{
	d_pile.supprimerElement();
	d_pile.supprimerElement();
	d_x = d_x - d_y;
	d_y = d_pile.front();
	d_pile.ajouterElement(d_x);
}
void Operande::multiplication()
{
	d_pile.supprimerElement();
	d_pile.supprimerElement();
	d_x = d_x * d_y;
	d_y = d_pile.front();
	d_pile.ajouterElement(d_x);
}
void Operande::division()
{
	d_pile.supprimerElement();
	d_pile.supprimerElement();
	d_x = d_x / d_y;
	d_y = d_pile.front();
	d_pile.ajouterElement(d_x);
}
void Operande::cosinus()
{
	d_pile.supprimerElement();
	d_x = cos(d_x);
	d_pile.ajouterElement(d_x);
}
void Operande::sinus()
{
	d_pile.supprimerElement();
	d_x = sin(d_x);
	d_pile.ajouterElement(d_x);
}
