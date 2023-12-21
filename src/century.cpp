//Include Times
#include "../include/ITime.h"
#include "../include/century.h"
#include "../include/decade.h"
#include "../include/year.h"

//Libraries
#include "raylib.h"

//Settings Setup
#include "../include/Settings.h"

//Constructors

Century::Century(int century, bool using_century)
    : ITime(Settings::GetInstance().getCenturyX(), 
    Settings::GetInstance().getCenturyY(), 
    Settings::GetInstance().getCenturyWidth(), 
    Settings::GetInstance().getCenturyHeight()) {

    int num_iters = 0;

    for (int i = (century - 1) * 100; i < century * 100; i += 10) {

        Decade* curr_decade = new Decade(i);

        // Sets decade position properly
        curr_decade->setY(Settings::GetInstance().getDecadeHeight() * num_iters + Settings::GetInstance().getDecadeY() + 1);

        // Sets the parent element of the decade
        curr_decade->setParent(this);
        
        // Add the decade to the decades vector
        decades.push_back(curr_decade);

        // Add individual years to the years vector
        std::vector<Year*> curr_decade_years = curr_decade->getYears();
        
        // Sets proper positions for all years
        for (int j = 0; j < 10; j++){
            curr_decade_years[j]->setX(Settings::GetInstance().getYearX() + Settings::GetInstance().getYearWidth() * j + 1);
            curr_decade_years[j]->setY(Settings::GetInstance().getDecadeHeight() * num_iters + Settings::GetInstance().getDecadeY() + 3);

            curr_decade_years[j]->toggleDisplayed(); //Display years only at start
            curr_decade_years[j]->setParent(curr_decade);

            years.push_back(curr_decade_years[j]);
        }


        num_iters++;
    
    }
}

Century::Century(int start_year) : Century((start_year / 100) + 1, true) {}

//Getter Methods

std::vector<ITime*> Century::getSubTime() const {
    std::vector<ITime*> result;
    for (const Decade* decade : decades) {
        result.push_back((ITime*)decade);
    }
    return result;
}

std::vector<Year*> Century::getYears() { return years; }

std::vector<Decade*> Century::getDecades() { return decades; }