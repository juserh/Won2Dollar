#ifndef __WONTODOLLAR
#define __WONTODOLLAR

#include "Converter.h"

class WonToDollar : public Converter {
protected:
	virtual double convert(double src);
	virtual string getSourceString();
	virtual string getDestString();
public:
	WonToDollar(double ratio) :Converter(ratio) {};
};
#endif
