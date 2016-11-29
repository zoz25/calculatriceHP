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

		friend ostream& operator<< (ostream& os, const Problem& pbm);
		friend istream& operator>> (istream& is, Problem& pbm);

		Operation& operator=  (const Pile& pl);
		bool operator== (const Pile& pl) const;
		bool operator!= (const Pile& pl) const;
	
	private:
		vector<double> d_tableau;
  };
  #endif

