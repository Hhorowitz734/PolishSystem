#ifndef CENTURY_H
#define CENTURY_H

#include "decade.h"
#include "year.h"
#include "ITime.h"
#include <vector>

class Century : public ITime {

public:
    /**
     * @brief Constructs Century item from century (Ex: 19 -> 1800s)
     * 
     * @param century The century number
     * @param using_century Boolean to indicate that you are using century num, value doesnt matter
     *
    */
    Century(int century, bool using_century);

    /**
     * @brief Constructs Century item from start year (Ex: 1800 -> 1800s)
     * 
     * @param start_year The start year of the century
    */
    Century(int start_year);

    /**
        * @brief Getter method for decades vector
        * 
        * @returns The array of Decade items in the century
    */
    std::vector<Decade*> getDecades();

    /**
     * @brief Getter method fro years vector
     * 
     * @returns The array of Year items in the century
     */
    std::vector<Year*> getYears();

    /**
     * @brief Returns an array of ITime pointers to Decade objects
     * 
     * @returns The array of pointers to Decade objects
     * 
     * You must keep in mind that this returns POINTERS rather than by reference
     * So please manage this properly in the future
    */
    std::vector<ITime*> getSubTime() const override;

private:
    std::vector<Decade*> decades;
    std::vector<Year*> years;

};


#endif