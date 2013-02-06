#include "Consonants.h"
#include <time.h>
#include <stdlib.h>

char CConsonants::consonants[consonantCount] = {
        'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z',
        'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'
    };

CConsonants::CConsonants(void)
{
}


CConsonants::~CConsonants(void)
{
}

char CConsonants::getConsonant(int index_)
{
    return this->consonants[index_];
}

char CConsonants::getRndConsonant()
{
    return this->consonants[rand() % this->consonantCount];
}