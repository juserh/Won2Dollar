#include "WonToDollar.h"
#include <iostream>
using namespace std;

double WonToDollar::convert(double src){
	return src / ratio;
}
string WonToDollar::getSourceString() { return "¿ø"; }
string WonToDollar::getDestString() { return "´Þ·¯"; }