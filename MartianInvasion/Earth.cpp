#include "Earth.h"
#include <stdio.h>


CEarth::CEarth(void)
    : nmbrCountries(0)
{
    for(int index = 0; index <= this->maxCountries; ++index)
    {
        this->countries[index] = NULL;
    }
}


CEarth::~CEarth(void)
{
}

bool CEarth::setCountry(CCountry* country_)
{
    if(this->nmbrCountries >= this->maxCountries - 1) return false;

    this->countries[this->nmbrCountries] = country_;
    ++this->nmbrCountries;
    return true;
}

CCountry* CEarth::getCountry(int index_)
{
    return this->countries[index_];
}