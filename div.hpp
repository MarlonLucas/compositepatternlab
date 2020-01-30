#ifndef _div_hpp_
#define _div_hpp_

#include "base.hpp"

using namespace std;

class div: public Base {
	public:
		div(Base* A,Base* B) {this->A = A; this->B = B;}
	
	
	virtual double evaluate() {return( A->evaluate() / B->evaluate());}
	virtual string stringify() {return (A->stringify() + " / " + B->stringify());}
	private:
		
		Base* A; Base* B;

};	
#endif
