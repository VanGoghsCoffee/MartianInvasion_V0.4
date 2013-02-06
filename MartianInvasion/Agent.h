#pragma once
#ifndef MARTIANINVASION_AGENT_H
#define MARTIANINVASION_AGENT_H

#include "martian.h"
#include "Base.h"
#include "City.h"
#include "Country.h"
#include "Earth.h"

class CAgent :
    public CMartian
{
public:
    CAgent(void);
    ~CAgent(void);
    static const int chDisc = 10;
    void comAgents();
    void comBase();
    virtual void travel() = 0;
	bool getDismissed();				//new, implemented
	void setDismissed(bool status_);	//new, implemented
    void setBase(CBase* base_);
    CCountry* getCountry();
    void setCountry(CCountry* country_);
    void setCity(CCity* city_);
    void setEarth(CEarth* earth_);
    CEarth* getEarth();

private:
    CBase*      base;
    CCity*      city;
    CCountry*   country;
    CEarth*     earth;
    bool        dismissed;
	/*int			agentNumber; erased number, identify via name*/
};

#endif /* MARTIANINVASION_AGENT_H */