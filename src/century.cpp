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

        //Sets decade position properly
        curr_decade->setY(Settings::GetInstance().getDecadeHeight() * num_iters + Settings::GetInstance().getDecadeY());
        
        // Add the decade to the decades vector
        decades.push_back(curr_decade);

        // Add individual years to the years vector
        std::vector<Year*> curr_decade_years = curr_decade->getYears();
        years.insert(years.end(), curr_decade_years.begin(), curr_decade_years.end());


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