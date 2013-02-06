#include "Application.h"
#include "Martian.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>

CApplication::CApplication(void)
{
}


CApplication::~CApplication(void)
{
}


int main(int argc, char* argv)
{
    time_t t;
	time(&t);
    srand((unsigned int)t);
    CConsonants* consonants = new CConsonants();
    CMartian* newMartian = new CMartian();
    newMartian->setName(consonants);
    std::cout << "Name: " << newMartian->getName();

	delete consonants;
	delete newMartian;
	return 0;
}