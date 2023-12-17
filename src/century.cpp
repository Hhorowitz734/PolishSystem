#include "../include/ITime.h"
#include "../include/century.h"
#include "../include/decade.h"
#include "../include/year.h"

#include "raylib.h"

//Constructors

Century::Century(int century, bool using_century)
    : ITime(100, 100, 100, 100) {

    for (int i = (century - 1) * 100; i < century * 100; i += 10) {
        Decade curr_decade(i);

        // Add the decade to the decades vector
        decades.push_back(curr_decade);
        
        // Add individual years to the years vector
        std::vector<Year> curr_decade_years = curr_decade.getYears();
        years.insert(years.end(), curr_decade_years.begin(), curr_decade_years.end());
    }
}

Century::Century(int start_year) : Century((start_year / 100) + 1, true) {}

//Getter Methods

std::vector<ITime*> Century::getSubTime() const {
    std::vector<ITime*> result;
    for (const Decade& decade : decades) {
        result.push_back((ITime*)&decade);
    }
    return result;
}

std::vector<Year> Century::getYears() { return years; }

std::vector<Decade> Century::getDecades() { return decades; }