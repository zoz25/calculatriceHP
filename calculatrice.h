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

		Calculatrice& operator=  (const Problem& pbm);
		bool operator== (const Problem& pbm) const;
		bool operator!= (const Problem& pbm) const;
	
	private:
		Pile& d_pile;
		Operation& d_operation;
		
  };
  #endif

