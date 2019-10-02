
#ifndef Efficiency_H
#define Efficiency_H
#define U  0.0000433

/////bazine klase skirta atominiu jegainiu ir reaktoriu efektyvumui skaiciuoti///

class Efficiency
{
protected:
	double NetCap, TherCap;
	double eff;
public:
	Efficiency();
	Efficiency(double NetCap, double TherCap);
	virtual ~Efficiency();
	double getEfficiency();
};

#endif