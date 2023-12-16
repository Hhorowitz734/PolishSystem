#include "../include/century.h"
#include "../include/decade.h"
#include "../include/year.h"

//Constructors

Century::Century(int century, bool using_century) {
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

std::vector<Year> Century::getYears() { return years; }

std::vector<Decade> Century::getDecades() { return decades; }
