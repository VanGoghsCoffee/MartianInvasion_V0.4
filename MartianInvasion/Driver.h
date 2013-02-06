#pragma once
#ifndef MARTIANINVASION_DRIVER_H
#define MARTIANINVASION_DRIVER_H

#include "agent.h"
class CDriver :
    public CAgent
{
public:
    CDriver(void);
    ~CDriver(void);
    virtual void travel();
    void chooseObs();
};

#endif /* MARTIANINVASION_DRIVER_H */