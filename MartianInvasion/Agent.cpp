#include "Agent.h"


CAgent::CAgent(void)
	: base(NULL)
	, city(NULL)
	, country(NULL)
    , earth(NULL)
    , dismissed(false)
{
}


CAgent::~CAgent(void)
{
}

bool CAgent::getDismissed()
{
	return this->dismissed;
}

void CAgent::setDismissed(bool status_)
{
	this->dismissed = status_;
}

CCountry* CAgent::getCountry() 
{
    return this->country;
}

void CAgent::setCountry(CCountry* country_)
{
    this->country = country_;
}

void CAgent::setCity(CCity* city_)
{
    this->city = city_;
}

void CAgent::setEarth(CEarth* earth_)
{
    this->earth = earth_;
}

CEarth* CAgent::getEarth() 
{
    return this->earth;
}
