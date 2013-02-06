#pragma once
#ifndef MARTIANINVASION_MARTIAN_H
#define MARTIANINVASION_MARTIAN_H

#include "Consonants.h"

class CMartian
{
public:
    CMartian(void);
    ~CMartian(void);
	static const int maxSlime = 8;		//new
	static const int minSlime = 3;		//new
	static const int maxNameSize = 15;	//new
	static const int minNameSize = 5;	//new
    void produceSlime();				//implemented, should work, but not tested
    int getSlime();						//implemented
    void setName(CConsonants* conso_);  //should be done after Martian is created. So we can use the CConsonant object
    char* getName();					//implemented

private:
    char*   name;
    int     slime;
};

#endif /* MARTIANINVASION_MARTIAN_H */