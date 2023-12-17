// Includes
#include "../include/ITime.h"
#include "../include/year.h"

// Settings
#include "../include/Settings.h"


// Constructors

Year::Year(int year) : year(year), 
    ITime(Settings::GetInstance().getYearX(), 
        Settings::GetInstance().getYearY(), 
        Settings::GetInstance().getYearWidth(), 
        Settings::GetInstance().getYearHeight()) {}

// Getter Methods

int Year::getYear() { return year; }

// Returns an empty vector
std::vector<ITime*> Year::getSubTime() const { return {}; } 