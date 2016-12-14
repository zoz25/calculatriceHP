#ifndef OPERANDE_H
#define OPERANDE_H
#include <iostream>
#include <cmath>
#include "pile.h"

using namespace std;

class Operande
  {
	public:
		Operande();
		~Operande();

		friend ostream& operator<< (ostream& os, const Operande& op);
		friend istream& operator>> (istream& is, Operande& op);

		Operation& operator=  (const Operande& op);
		bool operator== (const Operande& op) const;
		bool operator!= (const Operande& op) const;
		
		double getX();
		double getY();
		void ajouterOperande(double valeur);
		double supprimerOperande();
		void somme();
		void soustraction();
		void multiplication();
		void division();
		void cosinus();
		void sinus(); 
		void sqrt();
	
	private:
		Pile d_pileOperande;
		double d_x;
		double d_y;
  };
  //test commit
  #endif

