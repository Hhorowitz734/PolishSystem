#include "../include/ITime.h"
#include "../include/year.h"


//Constructors

Year::Year(int year) : year(year) {}

//Getter Methods

int Year::getYear() { return year; }

//Returns an empty vector
std::vector<ITime*> Year::getSubTime() const { return {}; } 