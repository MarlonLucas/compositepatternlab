#ifndef _RANDMOCK_HPP_
#define _RANDMOCK_HPP_

#include "base.hpp"
using namespace std;

class randmock: public Base {
	public:
		randmock(double randnum){this-> randnum = randnum;}
		virtual double evaluate()  {double randnum = rand() %100;
					return randnum; }
		virtual string stringify() {return to_string(randnum);}
              
	private:
	double	randnum;



};
#endif

