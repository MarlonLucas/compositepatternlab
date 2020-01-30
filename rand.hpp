#ifndef _RAND_HPP_
#define _RAND_HPP_

#include "base.hpp"
#include <stdlib.h>
#include <time.h>

using namespace std;

class Rand : public Base {
	public:
		Rand(double randnum){ this->randnum = randnum;}
		virtual double evaluate()  { double randnum = (rand() % 100); return randnum; }
		virtual string stringify() { return to_string(randnum); }
              
	private:
	double	randnum;



};
#endif

