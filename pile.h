#ifndef PILE_H
#define PILE_H
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Pile
  {
	public:
		Pile();
		~Pile();

		friend ostream& operator<< (ostream& os, const Pile& pile);
		friend istream& operator>> (istream& is, Pile& pile);

		Operation& operator=  (const Pile& pl);
		bool operator== (const Pile& pl) const;
		bool operator!= (const Pile& pl) const;
<<<<<<< HEAD
		
		
		void ajouterElement(double valeur);
		void supprimerElement(void);
		
=======
		void ajouterElement(double valeur);
		double supprimerElement();
>>>>>>> origin/master
	
	private:
		vector<double> d_tableau;
  };
  #endif

