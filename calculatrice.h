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

		friend ostream& operator<< (ostream& os, const Problem& pbm);
		friend istream& operator>> (istream& is, Problem& pbm);

		Calculatrice& operator=  (const Calculatrice& calculatriceHP);
		bool operator== (const Calculatrice& calculatriceHP) const;
		bool operator!= (const Calculatrice& calculatriceHP) const;
	
	private:
		const Pile& d_pile;
		Operation& d_operation;
		
  };
  #endif

