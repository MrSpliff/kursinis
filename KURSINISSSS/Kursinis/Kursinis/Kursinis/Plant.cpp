#include "pch.h"
#include "Plant.h"


Plant::Plant()
{
}


Plant::~Plant()
{
}

void Plant::setName(std::string name){
	this->name = name;
}

void Plant::setCountry(std::string country) {
	this->country = country;
}

void Plant::setUnits(int units) {
	this->units = units;
}

void Plant::setAnnualNet(double AnnualNet) {
	this->AnnualNet = AnnualNet;
}

std::string Plant::getName(void) {
	return(name);
}

std::string Plant::getCountry(void) {
	return(country);
}

int Plant::getUnits(void){
	return(units);
}

double Plant::getAnnualNet(void){
	return(AnnualNet);
}

double Plant::getMatter() {
	return(getAnnualNet() * pow(10, 6) * (U / (getEfficiency() / 100))) / 1000;
}

double Plant::getFuel() {
	return 250 * getMatter();
}