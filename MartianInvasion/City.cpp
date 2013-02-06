#include "City.h"


CCity::CCity(char* name_, int popul_)
	: name(name_)
	, popul(popul_)
	, slime(0)
{
}

CCity::~CCity(void)
{
}

char* CCity::getName()
{
	return this->name;
}

int CCity::getPopul()
{
	return this->popul;
}

int CCity::getSlime()
{
	return this->slime;
}

void CCity::setSlime(int slime_)
{
	this->slime = slime_;
}