#ifndef CALCULATRICE_H
#define CALCULATRICE_H
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Calculatrice
  {
	public:
		Calculatrice();
		~Calculatrice();

		friend ostream& operator<< (ostream& os, const Calculatrice& calculatriceHP);
		friend istream& operator>> (istream& is, Calculatrice& calculatriceHP);

		Calculatrice& operator=  (const Calculatrice& calculatriceHP);
		bool operator== (const Calculatrice& calculatriceHP) const;
		bool operator!= (const Calculatrice& calculatriceHP) const;
		
		// ajouter une operande dans d_operande
		void ajouterOperande(double valeur);
		// supprimer une operande dans d_operande
		int supprimerOperande();
		//ajouter une operation
		void ajouterOperation(char op);
		
		//effectuer opération 
	
	private:
	Pile d_operande;
	char operation;
		
		
  };
  
  
  
  #test commit ayoub
  #endif

