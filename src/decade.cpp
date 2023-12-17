//Includes
#include "../include/ITime.h"
#include "../include/decade.h"

//Libraries
#include <vector>
#include <iostream>

//Settings
#include "../include/Settings.h"

//Constructors

Decade::Decade(int start_year)
    : ITime(Settings::GetInstance().getDecadeX(), 
        Settings::GetInstance().getDecadeY(), 
        Settings::GetInstance().getDecadeWidth(), 
        Settings::GetInstance().getDecadeHeight()) {

    for (int i = start_year; i < start_year + 10; i++){
        Year* curr_year = new Year(i);
        years.push_back(curr_year);
    }
}

Decade::Decade(int century, int decade) : Decade((century - 1) * 100 + decade) {} 

//Getter methods

std::vector<Year*> Decade::getYears() { return years; }

std::vector<ITime*> Decade::getSubTime() const {
    std::vector<ITime*> result;
    for (Year* year : years) {
        result.push_back((ITime*)year);
    }
    return result;
}
