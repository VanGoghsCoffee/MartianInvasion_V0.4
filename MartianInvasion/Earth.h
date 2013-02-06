#pragma once
#ifndef MARTIANINVASION_EARTH_H
#define MARTIANINVASION_EARTH_H

#include "Country.h"

class CEarth
{
public:
    CEarth(void);
    ~CEarth(void);
    static const int maxCountries = 5;
    bool setCountry(CCountry* country_);
    CCountry* getCountry(int index_);

private:
    CCountry*   countries[maxCountries];
    int         nmbrCountries;              // number of Countries Earth is holding
                                          
};

#endif /* MARTIANINVASION_EARTH_H */