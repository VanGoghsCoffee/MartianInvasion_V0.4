#include "Observer.h"
#include <stdlib.h>


CObserver::CObserver(void)
{
}


CObserver::~CObserver(void)
{
}

void CObserver::travel()
{
    this->setCity(this->getCountry()->getCity(rand() % CCountry::maxCit));
}