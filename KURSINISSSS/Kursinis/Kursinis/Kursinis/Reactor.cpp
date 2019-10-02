#include "pch.h"
#include "Reactor.h"


Reactor::Reactor()
{
}


Reactor::~Reactor()
{
}

void Reactor::setType(std::string type) {
	this->type = type;
}


std::string Reactor::getType(void) {
	return type;
}

double Reactor::getNet() {
	return NetCap;
}

void Reactor::setModel(std::string model) {
	this->model = model;
}

std::string Reactor::getModel(void) {
	return model;
}