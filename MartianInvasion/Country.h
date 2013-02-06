#pragma once
#ifndef MARTIANINVASION_COUNTRY_H
#define MARTIANINVASION_COUNTRY_H

#include "City.h"
#include "Martian.h"
#include <list>

class CCountry
{
public:
    CCountry(char* name_);			//initialize array cities, too?
    ~CCountry(void);
    static const int maxCit = 5;
    char* getName();				//implemented
    CCity* getCity(int index_);	//implemented, changed (returns city with given index. The rest will be handled by calling class)
    bool setCity(CCity* city_);	//not implemented, maybe it's better to do it in the Logic?
    bool getSlimed();				//implemented
    void setSlimed(bool status_);	//implemented

private:
    char*                   name;
    CCity*                  cities[maxCit];
    bool                    slimed;
    std::list<CMartian*>    martians;
    int                     nmbrCit;

};

#endif /* MARTIANINVASION_COUNTRY_H */