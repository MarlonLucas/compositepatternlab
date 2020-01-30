#ifdef _sub_hpp_
#define _sub_hpp_

#include "base.hpp"

using namespace std;

class sub: public Base {
	public:
		sub(Base* A, Base* B) {}

		virtual double evaluate() {return A->evaluate() - B->evaluate();}
		virtual double stringify() {return A->stringify() + " - " B->stringify();}
	private:
		Base* A;
		Base* B;

}
#endif

