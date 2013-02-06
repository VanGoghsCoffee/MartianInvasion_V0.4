#pragma once
#ifndef MARTIANINVASION_LOGIC_H
#define MARTIANINVASION_LOGIC_H

#include "Martian.h"
#include "Country.h"

class CLogic
{
public:
    CLogic(void);
    ~CLogic(void);
    int doTurn(CMartian* sga_, int sgaCount_, CCountry* countries_, int countryCount_);
};

#endif MARTIANINVASION_LOGIC_H