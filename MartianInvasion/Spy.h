#pragma once
#ifndef MARTIANINVASION_SPY_H
#define MARTIANINVASION_SPY_H

#include "agent.h"
class CSpy :
    public CAgent
{
public:
    CSpy(void);
    ~CSpy(void);
    void checkCity();
    virtual void travel();
};

#endif /* MARTIANINVASION_SPY_H */