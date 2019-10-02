#ifndef Plant_H
#define Plant_H
#include "Efficiency.h"
#include <string>

///// atominiu jegainiu klase////


class Plant : public Efficiency
{
private: 
	std :: string name, country;
	int units;
	double AnnualNet;
	double Matter;

public:
	Plant();
	~Plant();
	Plant(double NetCap, double TherCap) : Efficiency::Efficiency(NetCap, TherCap) {};
	void setName(std::string name);
	void setCountry(std::string country);
	void setUnits(int units);
	void setAnnualNet(double AnnualNet);
	std::string getName(void);
	std::string getCountry(void);
	int getUnits();
	double getAnnualNet();
	double getMatter();
	double getFuel();
};

#endif

