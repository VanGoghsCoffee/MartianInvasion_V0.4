#include "Spy.h"


CSpy::CSpy(void)
{
}


CSpy::~CSpy(void)
{
}

void CSpy::travel()
{
    this->setCountry(this->getEarth()->getCountry(rand() % CEarth::maxCountries));
    this->setCity(this->getCountry()->getCity(rand() % CCountry::maxCit));
}