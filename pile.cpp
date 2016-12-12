

void Pile::ajouterOperande(double valeur)
{
	d_tableau.push_back(valeur);
}


void Pile::supprimerElement(void)
{
	d_tableau.pop_back();
}
