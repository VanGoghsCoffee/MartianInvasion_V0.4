#include "Country.h"


CCountry::CCountry(char* name_)
	: name(name_)
    , slimed(false)
    , nmbrCit(0)
{
}

CCountry::~CCountry(void)
{
}

char* CCountry::getName()
{
	return this->name;
}

CCity* CCountry::getCity(int index_)
{
	return this->cities[index_];
}

bool CCountry::setCity(CCity* city_)
{
    if(this->nmbrCit >= this->maxCit - 1) return false;

    this->cities[this->nmbrCit] = city_;
    ++this->nmbrCit;
    return true;
}

bool CCountry::getSlimed()
{
	return this->slimed;
}

void CCountry::setSlimed(bool status_)
{
	this->slimed = status_;
}