

void Calculatrice::ajouterOperande(double valeur)
{
	d_operande.ajouterElement(valeur);
}

void Calculatrice::supprimerOperande(void)
{
	d_operande.supprimerElement();
}


double Calculatrice::getOperande()
{
	return d_operande.back();
}

		
		//effectuer opération
		void Calculatrice::somme()
		{
			double x,y;
			x = getOperande();
			supprimerElement();
			y = getOperande();
			supprimerElement();
			ajouterElement(x+y);
			
		}
		void Calculatrice::soustraction()
		{
			double x,y;
			x = getOperande();
			supprimerElement();
			y = getOperande();
			supprimerElement();
			ajouterElement(x-y);
		}
		void Calculatrice::multiplication()
		{
			double x,y;
			x = getOperande();
			supprimerElement();
			y = getOperande();
			supprimerElement();
			ajouterElement(x*y);
		}
		void Calculatrice::division()
		{
			double x,y;
			x = getOperande();
			supprimerElement();
			y = getOperande();
			supprimerElement();
			ajouterElement(x/y);
		}
		void Calculatrice::cosinus()
		{
			double x = getOperande();
			supprimerElement();
			x = cos(x);
			ajouterElement(x);
		}
		void Calculatrice::sinus()
		{
			double x = getOperande();
			supprimerElement();
			x = sin(x);
			ajouterElement(x);			
		}
		void Calculatrice::racine()
		{
			double x = getOperande();
			supprimerElement();
			x = sqrt(x);
			ajouterElement(x);			
		}
