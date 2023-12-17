//Includes
#include "../include/ITime.h"
#include "../include/decade.h"

//Libraries
#include <vector>
#include <iostream>

//Settings
#include "../include/Settings.h"

//Constructors

Decade::Decade(int century, int decade)
    : ITime(Settings::GetInstance().getDecadeX(), 
        Settings::GetInstance().getDecadeY(), 
        Settings::GetInstance().getDecadeWidth(), 
        Settings::GetInstance().getDecadeHeight()) { //MODIFY THIS LINE AS NEEDED

    for (
        // Loops over 10 years following start year
        int i = (century - 1) * 100 + decade;
        i < (century - 1) * 100 + decade + 10;
        i++
        ) {
            years.push_back(Year(i));
        }

}

Decade::Decade(int start_year)
    : ITime(Settings::GetInstance().getDecadeX(), 
        Settings::GetInstance().getDecadeY(), 
        Settings::GetInstance().getDecadeWidth(), 
        Settings::GetInstance().getDecadeHeight()) {
            
    for (int i = start_year; i < start_year + 10; i++){
        years.push_back(Year(i));
    }
}

//Getter methods

std::vector<Year> Decade::getYears() { return years; }

std::vector<ITime*> Decade::getSubTime() const {
    std::vector<ITime*> result;
    for (const Year& year : years) {
        result.push_back((ITime*)&year);
    }
    return result;
}
