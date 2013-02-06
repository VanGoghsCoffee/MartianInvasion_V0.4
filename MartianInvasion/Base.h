#pragma once
#ifndef MARTIANINVASION_BASE_H
#define MARTIANINVSAION_BASE_H

#include "City.h"

#include "Earth.h"
#include "Martian.h"

class CBase
{
public:
    CBase(void);						//implemented		
    ~CBase(void);
    static const int observers  = 10;
    static const int drivers    = 10;
    static const int spies      = 5;
    static const int maxGrCit   = 3;
    void setLftAgnt(CMartian* sga_);
    void setDisc(CCity* city_);			//implemented
    void checkCit(CCity* city_);        //implemented ->checks whether a city is already stored in the array. If not, city will be saved
    void calcGrCit();                   //implemented  

private:
    CCity*  grCit[maxGrCit];
    CCity*  discCit[CCountry::maxCit * CEarth::maxCountries];
    int     nmbrDiscCit;
};

#endif /* MARTIANIVASION_BASE_H */