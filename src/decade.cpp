#include "../include/decade.h"
#include <vector>

//Constructors

Decade::Decade(int century, int decade) {
    for (
        // Loops over 10 years following start year
        int i = (century - 1) * 100 + decade;
        i < (century - 1) * 100 + decade + 10;
        i++
        ) {
            years.push_back(Year(i));
        }

}

Decade::Decade(int start_year) {
    for (int i = start_year; i < start_year + 10; i++){
        years.push_back(Year(i));
    }
}

//Getter methods

std::vector<Year> Decade::getYears() { return years; }



