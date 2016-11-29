#ifndef OPERATION_H
#define OPERATION_H
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Operation
  {
	public:
		Operation(Pile& pile);
		~Operation();

		friend ostream& operator<< (ostream& os, const Problem& pbm);
		friend istream& operator>> (istream& is, Problem& pbm);

		Operation& operator=  (const Problem& pbm);
		bool operator== (const Problem& pbm) const;
		bool operator!= (const Problem& pbm) const;
	
	private:
		Pile& d_pile;
  };
  #endif

