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

		Operation& operator=  (const Operation& oprt);
		bool operator== (const Operation& oprt) const;
		bool operator!= (const Operation& oprt) const;
	
	private:
		Pile& d_pile;
  };
  #endif

