#pragma once
#ifndef MARTIANINVASION_OBSERVER_H
#define MARTIANINVASION_OBSERVER_H

#include "agent.h"
class CObserver :
    public CAgent
{
public:
    CObserver(void);
    ~CObserver(void);
    void checkCity();
    virtual void travel();
};

#endif /* MARTIANINVASION_OBSERVER_H */