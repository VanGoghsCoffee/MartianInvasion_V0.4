#pragma once
#ifndef MARTIANINVASION_CONSONANTS_H
#define MARTIANINVASION_CONSONANTS_H

class CConsonants
{
public:
    CConsonants(void);
    ~CConsonants(void);
    static const int consonantCount = 42;	//number of consonants (upper and lower)
    char getConsonant(int index_);
    char getRndConsonant();

private:
    static char    consonants[consonantCount];

};

#endif /* MARTIANINVASION_CONSONANTS_H */