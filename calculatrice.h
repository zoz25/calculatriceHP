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
		void supprimerOperande();
		//ajouter une operation
		void ajouterOperation(char op);
		
		//retourne le premier element du tableau
		double getOperande(void);
		
		
		//effectuer opération
		void somme();
		void soustraction();
		void multiplication();
		void division();
		void cosinus();
		void sinus();
		void racine(); 
	
	private:
	Pile d_operande;
	char operation;
		
		
  };
  
  
  
  #test commit ayoub
  #endif

