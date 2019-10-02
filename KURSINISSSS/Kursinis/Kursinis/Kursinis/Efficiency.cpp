#include "pch.h"
#include "Efficiency.h"


Efficiency::Efficiency()					//konstruktorius
{
}


Efficiency::~Efficiency()					//destruktorius
{
}

Efficiency::Efficiency(double NetCap, double TherCap) {
	this->NetCap = NetCap;
	this->TherCap = TherCap;
}

double Efficiency::getEfficiency() {		//funkcija skirta apskaiciuoti atomines jegaines efektyvumui
	return (NetCap / TherCap) * 100;
}
