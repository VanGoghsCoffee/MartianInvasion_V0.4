#pragma once
#ifndef MARTIANINVASION_CITY_H
#define MARTIANINVASION_CITY_H

class CCity
{
public:
    CCity(char* name_, int popul_);
    ~CCity(void);
    char* getName();			//implemented
    int getPopul();				//implemented
    int getSlime();				//implemented
    void setSlime(int slime_);	//implemented

private:
    char*   name;
    int     popul;
    int     slime;
};

#endif /* MARTIANINVASION_CITY_H */