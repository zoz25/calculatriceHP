#include "calculatrice.h"


		// ajouter une operande dans d_operande
void Calculatrice::ajouterOperande(double valeur)
{
	d_operande.ajouterOperande(valeur);
}
		// supprimer une operande dans d_operande
double Calculatrice::supprimerOperande()
{
	return d_operande.supprimerOperande();
}
		//ajouter une operation
void Calculatrice::ajouterOperation(double valeur)
{
	d_operation.ajouterOperation(valeur);
}
