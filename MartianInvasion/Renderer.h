#pragma once
#ifndef MARTIANINVASION_RENDERER_H
#define MARTIANINVASION_RENDERER_H

#include "Martian.h"
#include "City.h"

class CRenderer
{
public:
    CRenderer(void);
    ~CRenderer(void);
    void rndrSlimed(CCity* city_);
    void rndrFail();
    void rndrCaught(CMartian* agent_);
};

#endif /* MARTIANINVASION_RENDERER_H */