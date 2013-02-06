#include "Driver.h"


CDriver::CDriver(void)
{
}


CDriver::~CDriver(void)
{
}

void CDriver::travel()
{
    this->setCity(this->getCountry()->getCity(rand() % CCountry::maxCit));
}