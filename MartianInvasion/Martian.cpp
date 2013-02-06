#include <time.h>
#include <stdlib.h>
#include "Martian.h"


CMartian::CMartian()
	: name(NULL)
    , slime(0)
{
}


CMartian::~CMartian(void)
{
}

void CMartian::produceSlime()
{
	this->slime = rand() % (maxSlime - minSlime + 1) + minSlime;
}

int CMartian::getSlime()
{
	return this->slime;
}

void CMartian::setName(CConsonants* conso_)
{
	int length = rand() % (maxNameSize - minNameSize + 1) + minNameSize;
	char rndConso[maxNameSize];

	for(int index = 0; index <= length; ++index){
		rndConso[index] = conso_->getRndConsonant();
	}

	this->name = rndConso;

    //calc rand length for name, write name with rand consonants
}

char* CMartian::getName()
{
	return this->name;
}