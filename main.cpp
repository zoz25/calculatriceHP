#include "calculatrice.h"

int main(int argc, char** argv)
{
	Calculatrice calcul = new Calculatrice();
	
	Calculatrice.ajouterOperande(10);
	Calculatrice.ajouterOperande(117);
	Calculatrice.ajouterOperande(32.4);
	
	Calculatrice.ajouterOperation("+");
	//va faire 32.4+117 et va supprimer les deux op�randes de la pile et ajouter le resultat, le nouveau x est le resultat de l'op�ration
	return EXIT_SUCCESS;
}
