#pragma once
#ifndef MARTIANINVASION_APPLICATION_H
#define MARTIANINVASION_APPLICATION_H

class CApplication
{
public:
    CApplication(void);
    ~CApplication(void);
    void run();
    bool createView();
};

#endif /* MARTIANINVASION_APPLICATION_H */