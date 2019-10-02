#ifndef Reactor_H
#define Reactor_H
#include "Efficiency.h"
#include <string>

/////// reaktoriu klase

class Reactor :	public Efficiency
{
private:
	std::string type, model;
public:
	Reactor();
	~Reactor();
	Reactor(double NetCap, double TherCap):Efficiency::Efficiency(NetCap, TherCap) {};
	void setType(std::string type);
	std::string getType(void);
	double getNet();
	void setModel(std::string model);
	std::string getModel(void);
};
#endif
