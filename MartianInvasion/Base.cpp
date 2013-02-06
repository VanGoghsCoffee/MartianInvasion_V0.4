#include "Base.h"


CBase::CBase(void)
	: nmbrDiscCit(0)
{
}

CBase::~CBase(void)
{
}

void CBase::setDisc(CCity* city_)
{
    this->discCit[this->nmbrDiscCit] = city_;
    ++this->nmbrDiscCit;
}

void CBase::checkCit(CCity* city_) 
{
    for(int index = 0; index <= this->nmbrDiscCit - 1; ++index)
    {
        if(this->discCit[index] != city_) this->setDisc(city_);
    }

    if(this->nmbrDiscCit >= CCountry::maxCit * CEarth::maxCountries) this->calcGrCit(); // check for the greatest cities if all cities are discovered
}

void CBase::calcGrCit()
{
    for(int indexGrCit = 0; indexGrCit <= this->maxGrCit - 1; ++indexGrCit)    // setting 3 random cities for comparison
    {
        this->grCit[indexGrCit] = this->discCit[indexGrCit];
    }

    for(int indexCit = 0; indexCit <= this->nmbrDiscCit - 1; ++indexCit)
    {
        for(int indexGrCit = 0; indexGrCit <= this->maxGrCit -1; ++indexGrCit)
        {
            if(this->discCit[indexCit]->getPopul() > this->grCit[indexGrCit]->getPopul()) this->grCit[indexGrCit] = this->discCit[indexCit];
        }
    }
}